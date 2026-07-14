#Green Efficiency Analysis#

##Measurement Methodology##
When analysing the provided programs I looked at the time taken to complete certain functions using the C's standard library and time library - clock_t, clock() and CLOCKS_PER_SEC. As these measurements use the CPUs internal time values, and this isn't as easily understood by humans, I translated them into human seconds up to 6 decimal places. This was done by taking the end time value minused by the start time value and dividing by the clocks per second value.

##Observed Performance Differences##
To get the average of the provided programs, I ran them 3 times each and then calculated the average using those values. Each run of the program showed an extremely small amount of variance between each run showcasing that each functional call isn't the same and can differ from a wide array of variables.

##Relation Between Runtime and Energy Consumption##
From the tests conducted we should be able to state that energy consumption is always lower given a shorter runtime,however this will not alway be the case. Each machine that will run the code may have vastly different specs that can impact the compiling and runtime of the code. You may find that machines with more robust hardware will use more energy to complete functions at a higher speed. You have also have some functions that will have a shorter runtime but end up caching information which will require more energy to store and remove later.

##Limitations of the Experiment##
This experiment is localised to not only the functions that were being performed but also by the machine that they were being performed on. This experiment is in no way a definitive statement on shorter runtimes being a better option for efficieny and energy consumption. For future testing, more machines should be present and tested on allowing us to get a better understanding of short comming in compiling or functions used.

##Practical Engineering Takeaway##
This round of tests has shown the important of testing when creating a program. Testing isn't a one time deal but should be constant throughout the life of the program. You may find functions that were quick and efficient at the start of the programs life become bogged down or inefficient the larger the program grows. Tests should also be robust and have accurate scope for the user base to ensure that they are maintaining a high level of accuracy.