# CPPND: Project use Pytorch API and QT5 to predict next word 
<img src="images/Image-1.png" width="600" height="450" />

In this Project, I create a visual Interface to use the Libtorch API to use an LSTM model to predict the next words according to the model weights. The model has been trained on books, and the weights just need to be loaded  into the model, choose a file with possible words and you are ready to go

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

This Instructions are varified on XUbuntu 18.04. 

1.Install qt5 by following the instructions link http://www.linuxfromscratch.org/blfs/view/svn/x/qt5.html (17.08.2020 <br>
2.open the terminal `git clone https://github.com/ChrisProgramming2018/CPP-Project.git` <br>
3. go in to repository `cd CPP-Project/` <br>
4. create folder for pytorch source code  `mkdir third `<br>
5. Use this link to Download the cpu pytorch https://download.pytorch.org/libtorch/cpu/libtorch-shared-with-deps-1.6.0%2Bcpu.zip <br>
6.  Unzip file `unzip third/libtorch-shared-with-deps-1.6.0+cpu.zip` <br>
7. move unpacked folder into third `mv libtorch/ third/` <br>
8. create folder for model `mkdir model` <br>
9. Download the pretrained model weights into model folder('model-trained.pt') <br>
10. Create  build folder and move into folder `mkdir build and cd build` <br>
11. Use cmake to create make file `cmake .. ` <br>
12. Build excutable `make` <br>
13. open API `./gui-app` <br>
14. Now you should be able to see the following  Window <br> 

# How to use the app
<img src="images/Image-2.png" width="600" height="450" />
1. Choose the path for the word file ( words avaiable for the network)
<img src="images/Image-3.png" width="600" height="450" />
2. Load the saved weights to the model
 <img src="images/Image-4.png" width="600" height="450" />
3. Add word in text window
<img src="images/Image-5.png" width="600" height="450" />
4. Click to predict the 4 next most likly to the model
<img src="images/Image-6.png" width="600" height="450" />
5. Click on the button with the word that fits for you 
6. The program adds the word to your input and displays  the outputs  




## For Capstone Project Review
### Loops, Functions, I/O
* The file Gui.cpp, LSTModel.cpp are have while and for loops read and laod data from files

### Memory Management
*At least two variables are defined as references, the Gui elements from qt QString QLable, ... 
### Object Oriented Programming
* The folder include/ defines the header files for the different classes 
* Create qt myDlg which inherits from QWidget and Worker Objets for the second thread   

### Concurrency
* need to use the QThread library to run the model in parallel to keep the prediction latency low 
