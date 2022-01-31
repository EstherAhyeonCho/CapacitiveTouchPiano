# CapacitiveTouchPiano

Created a capacitve piano with Arduino using aluminum foil keys

This project is intended to work as the piano that has range of from the note C4 to B4 (one octave). 
The piano senses human fingers when they are placed on the aluminum foil keys, which delivers electricity and completes the circuit.
Then this signal goes to the pin 13 which is connected to the buzzer, and plays the corresponding note.

*However, having all 12 keys did not work as intended (had delay of playing & not playing the note correctly). Currently in the process of modifying the code.

Down below is the actual circuit for this project.

Used compnents: Arduino Uno, active buzzer, 1M resistors, aluminum foil keys, aligator clip wires

![image](https://user-images.githubusercontent.com/88179478/151736330-3fd164b4-ef8e-4408-af80-b0e8a7cfccd5.png)

![image](https://user-images.githubusercontent.com/88179478/151736351-ef1e641a-f017-4b72-aa00-e8240ac33200.png)

The image below is the prototype that created to check if the circuit is complete and works without any code.

![image](https://user-images.githubusercontent.com/88179478/151736516-cdb535e7-a91a-429d-84eb-51b2efbdb211.png)
