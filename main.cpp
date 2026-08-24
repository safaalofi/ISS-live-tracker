#include<iostream> 
#define CPPHTTPLIB_OPENSSL_SUPPORT // enables HTTPS in httplib
// define comes before include httplib
#include "httplib.h" // allows the c++ program to communicate with web servers
#include "json.hpp"
#include<thread>  //provides the ability to pause the currect thread
#include<chrono> // provides the concept of time durations
using json = nlohmann::json;
int main(){
    // create an http client called client
    httplib:: Client client ("https://api.wheretheiss.at");
    // send a GET request 
    json data;
    int count=0;
    while (true){
    if (auto res = client.Get("/v1/satellites/25544")){
        std::cout<< res->status <<std::endl;
        data = json::parse(res->body);
        double id= data["id"];
        double latitude =data["latitude"];
        double altitude= data["altitude"];
        double velocity=data["velocity"];
        long long time= data["timestamp"];
        std::cout<<"ID:"<<id<<std::endl;
        std::cout<<"Latitude:"<<latitude<<std::endl;
        std::cout<<"Altitude:"<<altitude<<std::endl;
        std::cout<<"Velocity:"<<velocity<<std::endl;
        std::cout<<"Timestamp:"<<time<<std::endl;
        count++;
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }
    }

}