#include<iostream> 
#define CPPHTTPLIB_OPENSSL_SUPPORT // enables HTTPS in httplib
// define comes before include httplib
#include "C:\Users\safaa\Desktop\httplib.h" // allows the c++ program to communicate with web servers
#include "C:\Users\safaa\Desktop\json.hpp"

int main(){
    // create an http client called client
    httplib:: Client client ("https://api.wheretheiss.at");
    // send a GET request 
    if (auto res = client.Get("/v1/satellites/25544")){
        std::cout<< res->status <<std::endl;
        std::cout<<res->body<<std::endl;
    }

}