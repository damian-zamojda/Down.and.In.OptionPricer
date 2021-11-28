#include<Rcpp.h>
#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include"EuropeanOption.h"
#include"getVecMean.h"
#include"getVecStdDev.h"

using namespace Rcpp;
using namespace std;
using std::vector;
using std::cout;
using std::cin;

// [[Rcpp::export]]

double CallDownAndInPrice(
    int nInt_ = 100,
    double Strike_ = 50,
    double Spot_ = 45,
    double Vol_ = 0.25,
    double r_ = 0.04,
    double Expiry_ = 0.5,
    double barrier_ = 55){
	// set the seed
	srand( time(NULL) );
	//create a new instance of class
	EuropeanOption myEuro(nInt_, Strike_, Spot_, Vol_, r_, Expiry_, barrier_);

	//run Monte Carlo to obtain theoretical price of European Barrier Down and In Option
	double result = myEuro.getEuropeanDownAndInCallPrice(10000);

	return result;
}