#include <opencv2/opencv.hpp>
#include <iostream>
#include <math.h>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	// IMREAD_UNCHANGED < 0 图像输入不做改变
	// IMREAD_GRAYSCALE = 0 图像作为灰度图输入
	// IMREAD_COLOR > 0 图像彩色输入
	Mat scr = imread("D:/image/learning/dog.jpg");
	if (scr.empty())
	{
		cout << "图像加载失败" << endl;
		system("pause");
		return 0;

	}

	namedWindow("加载图像", WINDOW_NORMAL);
	imshow("加载图像", scr);

	//修改图像为灰度图像
	namedWindow("灰度图像", WINDOW_NORMAL);
	Mat gray_scr;

	//使用cvtColor 可以改变图像的色彩空间
	cvtColor(scr, gray_scr, COLOR_BGR2GRAY);
	//cvtColor(scr, gray_scr, CV_RGB2HLS);
	imshow("灰度图像", gray_scr);

	//图像保存
	//imwrite("D:/image/dog.png", gray_scr);


	waitKey(0);
	return 0;
}