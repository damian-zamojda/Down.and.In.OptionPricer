#include<iostream>
#include<cmath>
#include<algorithm>
#include"getOneGaussianByBoxMueller.h"
#include"EuropeanOption.h"


//definition of constructor
EuropeanOption::EuropeanOption(
  int nInt_,
	double strike_,
	double spot_,
	double vol_,
	double r_,
	double expiry_,
	double barrier_){
		nInt = nInt_;
		strike = strike_;
		spot = spot_;
		vol = vol_;
		r = r_;
		expiry = expiry_;
		barrier = barrier_;
		generatePath();
}

//method definition
void EuropeanOption::generatePath(){
	double thisDrift = (r * expiry - 0.5 * vol * vol * expiry) / double(nInt);
	double cumShocks = 0;
	thisPath.clear();

	for(int i = 0; i < nInt; i++){
		cumShocks += (thisDrift + vol * sqrt(expiry / double(nInt)) * getOneGaussianByBoxMueller());
		thisPath.push_back(spot * exp(cumShocks));
	}
}

//method definition
void EuropeanOption::printPath(){

	for(int i = 0;  i < nInt; i++){

		std::cout << thisPath[i] << "\n";

	}

}

//Project - European Call Down and In Barrier
double EuropeanOption::getEuropeanDownAndInCallPrice(int nReps){

	double rollingSum = 0.0;
	double lastPrice = 0.0;


	for(int i = 0; i < nReps; i++){
		generatePath();
		lastPrice=thisPath[thisPath.size() - 1];
		double thisMin = *min_element(thisPath.begin(), thisPath.end());
		rollingSum += ((lastPrice > strike) && (thisMin < barrier)) ? (lastPrice-strike) : 0;
	}

	return double(exp(-r*expiry)*rollingSum)/double(nReps);
}

//Project - European Put Down and In Barrier
double EuropeanOption::getEuropeanDownAndInPutPrice(int nReps){
  
  double rollingSum = 0.0;
  double lastPrice = 0.0;
  
  
  for(int i = 0; i < nReps; i++){
    generatePath();
    lastPrice=thisPath[thisPath.size() - 1];
    double thisMin = *min_element(thisPath.begin(), thisPath.end());
    rollingSum += ((lastPrice < strike) && (thisMin < barrier)) ? (strike-lastPrice) : 0;
  }
  
  return double(exp(-r*expiry)*rollingSum)/double(nReps);
}


//overloaded operator ();
double EuropeanOption::operator()(char char1, char char2, int nReps){
	if ((char1 == 'A') & (char2 =='C'))      return getEuropeanDownAndInCallPrice(nReps);
	else return -99;
}
