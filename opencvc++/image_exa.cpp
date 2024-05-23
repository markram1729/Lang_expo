#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>

using namespace cv;
int main()
{
	//std::string image_path=samples::findFile("/home/regaltos/Pictures/photo_2019-09-18_18-21-23.jpg");
	Mat img = imread("/home/regaltos/Pictures/photo_2019-09-18_18-21-23.jpg",IMREAD_COLOR);
	std::cout <<"Dimension1 "<<img.dims<<std::endl;
	if(img.empty())
	{
		std::cout<<"Coiuld not find image "<<std::endl;
		return 1;
	}
	imshow("MArk IMages show ",img);

	int k = waitKey(0);

	if(k=='s')
	{
		imwrite("photo_2019-09-18_18-21-23.jpg",img);
	}
	Mat im2 = imread("/home/regaltos/Pictures/RIshik_Ram.png",IMREAD_UNCHANGED);
	std::cout <<"Dimension2 "<<im2.dims<<std::endl;
	return 0;

}
