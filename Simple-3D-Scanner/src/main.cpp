/*
 * main.cpp
 *
 *  Created on: 29.12.2015
 *      Author: daniel
 */

#include<iostream>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"


int main(int argc, char argv[]){

	cv::Mat image = cv::imread("im.jpg");
	cv::neamedWindow("My Image");
	cv::imshow("My Image",image);
	cv::waitKey(5000);
	return 0;
}
