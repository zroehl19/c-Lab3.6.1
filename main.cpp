/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: zroehl
 *
 * Created on September 13, 2017, 1:17 PM
 */

#include <iostream>
using namespace std;

int var = 0;

void increment(int increment)
{
    var = increment + 1;
}

void increment(int increment, int i)
{
    var = increment+i;
}

int main() {
    
    for(int i = 0; i<10; i++)
    {
        if(i%2)
        {
            increment(var);
        }
        else
        {
            increment(var, i);
        }
    }
    cout << var << endl;
}

