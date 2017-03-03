/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on 02. März 2017, 16:13
 */

#include <iostream>
#include <math.h>
using namespace std;



  
  int BruteForce() {
        
  int ascii = 0;
  int zahl = 0;
  do {
    
  string s1; s1=(char) ascii;
  
  
  
  cout << zahl << endl;
  zahl += 1;
  cout << s1 << endl << endl << endl;
  ascii += 1;
  
  
  
  }while(ascii != 127);
  
  }
  
  
  
  int BruteForce2() {
        
  int ascii = 0;
  int zahl = 0;
  do {
    
  string s1; s1=(char) ascii;
  string s2; s2=(char) ascii;
  
  
  
  cout << zahl << endl;
  zahl += 1;
  cout << s1 << s2 << endl << endl << endl;
  ascii += 1;
  
  
  
  }while(ascii != 127);
  
  }
  
  
  
  
 /*
  
  Main
  
  */
  
  
  int main() {
    BruteForce();
    BruteForce2();
    
    
    return 0;
}