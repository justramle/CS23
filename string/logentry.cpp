//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
// 

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector> 

#include "string.hpp" 
#include "logentry.hpp"


std::ostream& operator<<(std::ostream &out, const LogEntry& rhs) {
    
    out << "Host: " << rhs.getHost() << "\n";
    out << "Date: " << rhs.getDate() << "\n";
    out << "Time: " << rhs.getTime() << "\n";
    out << "Request: " << rhs.getRequest() << "\n"; 
    out << "Status: " << rhs.getStatus() << "\n"; 
    out << "Bytes: " << rhs.getBytes() << "\n"; 
    
    return out;
}

std::ostream& operator<<(std::ostream &out, const Date& d) {
    out << d.day << "/" << d.month << "/" << d.year ;
     return out;
}

std::ostream& operator<<(std::ostream &out, const Time& t) {
    out << t.hour << ":" << t.minute << ":" << t.second ;
    return out;
}


Date::Date(){
     month = "";
     day = "";
     year = 0;
}

Time::Time(){
    hour = 0;
    minute = 0;
    second = 0;
}

Date::Date(String d, String m, int y){
    day = d;
    month = m;
    year = y;
}

Time::Time(int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
}

// Function string conver to int
int toInt(String s){

    int len = s.length() - 1;
    int value = 0, tenplace = 1;
            
    for (int i = len; i >= 0; --i)
    {
        int digit = int(s[i]) - int('0');
        value += digit * tenplace;
        tenplace *= 10;
    }
            
    return value;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
// 0: 131.123.47.176
// 1: - 
// 2: - 
// 3: [18/Sep/2002:12:05:25 date + time
// 4: -0400] 
// 5: "GET 
// 6: /~darci/ 
// 7: HTTP/1.0" 
// 8: 200 
// 9: 5625    
LogEntry::LogEntry(String s): LogEntry(){
    // ...
    std::vector<String> vec = s.split(' ');
    
    if (vec.size() == 10){
        host = vec[0]; //ip
        request = vec[5] + " " + vec[6] + " " + vec[7]; //get /actual reuest
        status = vec[8];

    if (vec[9] != '-'){
        number_of_bytes = toInt(vec[9]);
    } else {
        number_of_bytes = 0;
    }
        

    // split at ':' for time
    std::vector<String> dateAndTime = vec[3].split(':');
        time = Time( toInt(dateAndTime[1]), toInt(dateAndTime[2]), toInt(dateAndTime[3]) );

     // split at '/' for time
    std::vector<String> forDate = dateAndTime[0].split('/');
        date = Date(forDate[0], forDate[1], toInt(forDate[2]) );  
    
    }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//

std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;

    char temp[500];
  //  String s;
    in.getline(temp, 500);
   
    while(!in.eof()) {

        String s(temp);
        in.getline(temp, 500);
        result.push_back(LogEntry(s)); 
    }
    
    return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry> &rhs) {
    std::cout << "Output all" << std::endl;
    for(int i = 0; i < (int)rhs.size(); ++i) 
        out << rhs[i] << std::endl;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>& rhs) {
    std::cout << "By host" << std::endl;
    for(int i = 0; i < (int)rhs.size(); ++i)
        out << rhs[i].getHost() << std::endl;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry> &rhs) {
    std::cout << "Byte Count" << std::endl;
    int count = 0;
    for(int i = 0; i < (int)rhs.size(); ++i){
        count += rhs[i].getBytes();
    }
        
    return count;    
}