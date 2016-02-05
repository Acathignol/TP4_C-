#include <cstdlib> 
#include <iostream>
#include <stdio.h>
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Polynome.h"


// ===========================================================================
//                       Definition of static attributes
// ===========================================================================
  
// ===========================================================================
//                                Constructors
// ===========================================================================
//Constructeur par défaut
Polynome::Polynome() {
  size_ = 0;
  data_ = NULL;
}

//Constructeur par copie
Polynome::Polynome(const Polynome& polynome) {
  size_  = polynome.size();
  data_ = new double[size_];
  
  for (int i=0; i<size_;i++){
    data_[i]=polynome.data()[i];
  }
}

Polynome::Polynome(int size) {
  size_ = size;
  data_ = new double[size_];
  
  for (int i=0; i<size;i++){
    data_[i]=0.;
  }
}

Polynome::Polynome(int size, double value) {
  size_ = size;
  data_ = new double[size_];
  
  for (int i=0; i<size;i++){
    data_[i]=value;
  }
}

//opérateur crochet
double& Polynome::operator[](int i){
  return data_[i];
}

double Polynome::operator[](int i) const{
  return data_[i];
}

//opérateur somme
Polynome Polynome::operator+(const Polynome polynome2){
  
  Polynome newpolynome(size_+polynome2.size());
  
  for (int i=0; i<size_;i++){
    newpolynome[i]=data_[i];
  }
  
  for (int i=size_; i<(size_+polynome2.size());i++){
    newpolynome[i]=polynome2.data()[i-size_];
  }
  
  return newpolynome;
}

//opérateur égal
void Polynome::operator=(const Polynome polynome2){
  delete[] data_;
  size_=polynome2.size();
  data_ = new double[size_];
  for (int i=0; i<polynome2.size();i++){
    data_[i]=polynome2.data()[i];
  }
}

// ===========================================================================
//                                 Destructor
// ===========================================================================
Polynome::~Polynome(){
  delete[] data_;
  }
  
// ===========================================================================
//                               Public Methods
// ===========================================================================

//Getter size and data
int Polynome::size(void) const{
  return size_;
}

double* Polynome::data(void) const{
  return data_;
}

//Setter value in table
void Polynome::set(int where,double value){
  data_[where]=value;
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================
