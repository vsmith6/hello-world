# hello-world
Tutorial repository SNHU
Hello, you have found the tutorial repository for my work at SNHU. 
My name is Valerie Smith and I am a computer science student and a full time web developer.
My favorite code to write in is Java, and I also like to work with client facing website technologies such as ReactJS 
and regular Javascript. 
Thank you for reading :)

Week 8 additional information

The project represented here is a beginning C++ project for a fictional client that wants to view a clock on their website in a 12 hour and a 24 hour format. The challenge was to create the clocks, display them side by side,  and then allow the user to manipulate the input for the hour, second, and minutes. The clocks were to start and increment a second, wait a second, and then start over unless the user entered a choice from a menu that was displayed. 

I selected this project in particular for a portfolio piece because of the clarity around the specifications and that the Zybook was a very good reference, which I did not find true for the other two projects, particularly the final project 3. 

I feel that I did particularly well with modularization. I separated out the display menu’s in to their own file, and added all of the necessary h files in order to pass the files where they needed to be. I also created separate files for the functions, such as getLocalHour(), in order to be able to expand the code in the future. The main class has only a reference to startClock() and the program runs itself from there.

To enhance this code, classes could be used to store the information about the hour, minute, and second, as well as a clock class. We had not gotten to that part in the book for the course yet, so I did not want to expand upon it and include things that we hadn’t ‘learned’.  With the addition of the classes, I could use pass by reference and improve some memory issues, as well as also expand upon the further extensibility of the code.

This code was challenging when adding in the ctime library in order to read the local time from the user’s system.  It was a challenge to add the ctime library as the clock could have been started with input from a user, but I found a way to get the local time and capture it into a variable that could be manipulated by the user. 
For resources, I found that the course book in Zybook was a very good and clear reference to the things that I needed to perform this task. I had to research the ctime library a little on my own, but I put the extra effort into including it.

A lot of skills from this project will transfer to future work, such as the modularization mentioned. Learning to create small chunks of reusable code is very important for a software engineer and makes the code easier to understand and to reuse. Also, learning about the external libraries such as the ctime library is also a skill that is necessary.

This program is readable as it includes a lot of good commenting and the functions and menus are clearly named and easy to understand. This program is maintainable as it is modularized and able to be expanded in functionality. This program is adaptable as it could have a different clock library put in or be configured to accept the values for local time directly from the user, as well as change the style of the menus without disrupting any of the code.

Thank you
Valerie J. Smith

