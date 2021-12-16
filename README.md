# CSC211H-Honors-Project

# Inspiration
My project aims to address the issue of clothing waste by enabling consumers to track their clothing purchases and the clothes they own, so that people can recognize how much they are spending on clothing, cut down on consumption, encourage reuse and recycle, and help save the planet.

# Project Description
Mobile Closet is an application that allows users to input pictures and descriptions of their clothes and displays them in separate, organized categories. It is a desktop app built with QT Framework and C++11.

This application is developed by Jingjing Ye, under the supervision of Dr. Azhar as the honor's project for the course CSC211H Advanced Programming Techniques.

Link to website for more information: https://sites.google.com/view/csc211h-project/home

# Algorithm
In this application, I incorporated all major advanced programming techniques I learned in 211H, including pointer, inheritance, constructors, destructors, dynamic memory allocation, and file input.

# Challenges & Accomplishments
Navigating through the Qt framework has been a challenge for me. The syntax is very different from the c++ we learned in class, and the Qt interface is more complex than the IDE we’re used to working with in class such as Replit. 
How I solved this problem is by reading the official user guide of Qt, going through some of the simple widget examples Qt provides, watching a lot of YouTube videos, and looking at some Stack Overflow questions. The user guide on Qt provides extensive, theoretical explanations of how widgets work, like what different libraries are for and what are slots and signals. The examples in Qt shows me how a widget project is structured, what files to put under each directory, what should be included in each file, but they’re not the most helpful for coding my own project, because most of the examples are written in QML, a powerful UI markup language but above the scope of our class. The YouTube videos and Stack Overflow have definitely been most helpful in helping me write and implement my own project. I’ve watched videos explaining how buttons work, to displaying a single image, to creating a thumbnail viewer for multiple images, all of which are essential functions of my application.

The Qt class hierarchy has been another challenge for me to grasp. In our homework assignments, we can just create a base class ourselves and inherit other classes from it. From videos in the Qt YouTube official channel, I learned that in Qt, everything that appears on the screen inherits from QWidget, which is a QObject. The QWidget is then passed in as a constructor parent argument when an object is created. The memory management of QObjects is done automatically. There’s no need to call to delete, but I need the keyword new to create new objects. I also learned that I cannot copy a QObject. These knowledge are essential to helping me debug my code. 

File input on Qt has also been a challenge for me because it’s different from what we learned in class. In our roomba projects, we import everything into our program and use ifstream instructions like .open(), but in Qt, file input needs to be implemented by giving the physical path of the files to widget.cpp. I also learned about the differences between physical path and relative path. If someone else wants to run my program on their computer, they would have to change the physical path of the pictures in the .cpp file in order for the program to locate the files.

# Future Direction
I hope to continue to improve the UI design of my application by including more features such as editing the information of clothes inside the application to make it easier for users, and including more features such as donation centers near a zipcode. I also want to learn to create an iOS mobile app and/or a browser extension so that it can be more portable and create a bigger impact on promoting green consumption.
