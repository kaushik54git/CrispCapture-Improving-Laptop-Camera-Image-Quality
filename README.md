# Image Quality Enhancement with OpenCV and Replicate AI

## Introduction

This project is an Image Quality Enhancement program that utilizes the power of OpenCV for capturing images from a laptop camera and Replicate AI to improve the image quality. The program is implemented in both C++ and Python, allowing users to choose their preferred language for image enhancement.

The combination of OpenCV's image capture capabilities and Replicate AI's advanced image improvement algorithms provides a seamless way to obtain better-quality images from your laptop's camera.

## Features

- Capture images using the laptop's camera in real-time.
- Utilize Replicate AI's cutting-edge algorithms to enhance image quality.
- Choose between C++ and Python versions of the program for image enhancement.
- Easily integrate the image quality enhancement functionality into other projects.

## Requirements

- OpenCV (C++ and Python bindings)
- Replicate AI library
- Laptop with a working camera

## Installation

1. Make sure you have installed OpenCV for both C++ and Python. If you haven't installed it, follow the instructions on the [OpenCV website](https://opencv.org/) to install it for your system.

2. Acquire the Replicate AI library by signing up for an account and obtaining the necessary credentials. Visit the [Replicate AI website](https://www.replicate.ai/) to get started.

3. Clone this repository to your local machine:

```bash
git clone https://github.com/your_username/image-quality-enhancement.git
cd image-quality-enhancement
```

4. Set up the Replicate AI credentials in the program. Open the `config.json` file and replace `<YOUR_API_KEY>` with your actual Replicate AI API key.

## Usage

### C++ Version

1. Build the C++ program using your preferred C++ compiler:

```bash
g++ -o enhance_cxx enhance_image.cpp `pkg-config --cflags --libs opencv`
```

2. Run the C++ program:

```bash
./camera_on.cpp
```

3. The program will launch the laptop's camera and start capturing images. Each captured image will be automatically processed using Replicate AI's image enhancement algorithms, and the enhanced image will be displayed on the screen.

### Python Version

1. Make sure you have Python and the required libraries installed:

```bash
pip install replicate-ai
```

2. Run the Python program:

```bash
python rep_py.py
```

3. Similar to the C++ version, the Python program will open the laptop's camera and display real-time images after enhancement.

## Contributing

We welcome contributions from the community! If you find any issues or have ideas to improve this project, please feel free to open an issue or submit a pull request.

## License

This project is licensed.

---

Thank you for using Image Quality Enhancement with OpenCV and Replicate AI. If you have any questions or feedback, please don't hesitate to contact us. Happy enhancing!
