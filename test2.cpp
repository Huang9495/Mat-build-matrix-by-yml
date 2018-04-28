#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <opencv/cv.h>
using namespace std;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <vector>
#include <deque>


#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#define DEBUG_PRINTF 0

using namespace cv;
using namespace std;



int main(){

        cv::FileStorage fs;  
        cv::Mat distcalo = (cv::Mat_<double>(1,3852) << matrix_params );
        fs.open("output_route",FileStorage::WRITE);  
        fs<<"datas"<<distcalo;
}
