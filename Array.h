#ifndef ARRAY_H__
#define ARRAY_H__

// ===========================================================================
//                                  Includes
// ===========================================================================

class Array {
 public :
 
  // =========================================================================
  //                               Constructors
  // =========================================================================
  Array();
  Array(const Array& array);
  Array(int size);
  Array(int size, double value);
  
  // =========================================================================
  //                                Destructor
  // =========================================================================
  ~Array();
  // =========================================================================
  //                                  Getters
  // =========================================================================
  int size(void) const;
  double* data(void) const;
  // =========================================================================
  //                                  Setters
  // =========================================================================
  void set(int where,double value);
  // =========================================================================
  //                                 Operators
  // =========================================================================
  virtual double& operator[](int i);
  virtual double operator[](int i) const;
  virtual Array operator+(const Array array2);
  virtual void operator=(const Array array2);
  // =========================================================================
  //                              Public Methods
  // =========================================================================


protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================
  int size_;
  double* data_; 
  
};


// ===========================================================================
//                            Getters' definitions
// ===========================================================================


// ===========================================================================
//                            Setters' definitions
// ===========================================================================

// ===========================================================================
//                           Operators' definitions
// ===========================================================================

// ===========================================================================
//                        Inline functions' definition
// ===========================================================================



#endif // ARRAY_H__
