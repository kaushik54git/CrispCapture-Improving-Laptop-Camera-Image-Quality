#include <opencv2/opencv.hpp>
//include<opencv.hpp>
#include <cstdlib>


int cam_on() {
    cv::VideoCapture capture(0); // 0 represents the default camera (you can change this index to use a different camera)

    if (!capture.isOpened()) {
        std::cout << "Failed to open the camera!" << std::endl;
        return -1;
    }

    cv::Mat frame;

    while (true) {
        capture >> frame; // Capture a frame from the camera

        if (frame.empty()) {
            std::cout << "Failed to capture an image!" << std::endl;
            break;
        }

        cv::imshow("Camera", frame);

        char key = cv::waitKey(1);
        if (key == 'c' || key == 'C') {
            // Save the captured frame to an image file
            cv::imwrite("sample.jpg", frame);
            std::cout << "Image captured!" << std::endl;
        }
        else if (key == 27) { // '27' represents the escape key (ESC)
            break; // Exit the loop if the user presses the ESC key
        }
    }
    // Release the camera
    capture.release();
    cv::destroyAllWindows();
    const char* command = "python rep_py.py sample.jpg"; // For Python 3
    // const char* command = "python myscript.py"; // For Python 2

    // Use the system() function to run the Python script
    int returnCode = system(command);

    // Release the camera
    //capture.release();
    //cv::destroyAllWindows();

    return 0;
}
