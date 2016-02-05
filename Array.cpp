#include <cstdlib> 
#include <iostream>
#include <stdio.h>
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Array.h"


// ===========================================================================
//                       Definition of static attributes
// ===========================================================================
  
// ===========================================================================
//                                Constructors
// ===========================================================================
//Constructeur par défaut
Array::Array() {
  size_ = 0;
  data_ = NULL;
}

//Constructeur par copie
Array::Array(const Array& array) {
  size_  = array.size();
  data_ = new double[size_];
  
  for (int i=0; i<size_;i++){
    data_[i]=array.data()[i];
  }
}

Array::Array(int size) {
  size_ = size;
  data_ = new double[size_];
  
  for (int i=0; i<size;i++){
    data_[i]=0.;
  }
}

Array::Array(int size, double value) {
  size_ = size;
  data_ = new double[size_];
  
  for (int i=0; i<size;i++){
    data_[i]=value;
  }
}

//opérateur crochet
double& Array::operator[](int i){
  return data_[i];
}

double Array::operator[](int i) const{
  return data_[i];
}

//opérateur somme
Array Array::operator+(const Array array2){
  
  Array newarray(size_+array2.size());
  
  for (int i=0; i<size_;i++){
    newarray[i]=data_[i];
  }
  
  for (int i=size_; i<(size_+array2.size());i++){
    newarray[i]=array2.data()[i-size_];
  }
  
  return newarray;
}

//opérateur égal
void Array::operator=(const Array array2){
  delete[] data_;
  size_=array2.size();
  data_ = new double[size_];
  for (int i=0; i<array2.size();i++){
    data_[i]=array2.data()[i];
  }
}

// ===========================================================================
//                                 Destructor
// ===========================================================================
Array::~Array(){
  delete[] data_;
  }
  
// ===========================================================================
//                               Public Methods
// ===========================================================================

//Getter size and data
int Array::size(void) const{
  return size_;
}

double* Array::data(void) const{
  return data_;
}

//Setter value in table
void Array::set(int where,double value){
  data_[where]=value;
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================
