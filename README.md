# CapacitiveTouchPiano

Created a capacitve piano with Arduino using aluminum foil keys

This project is intended to work as the piano that has range of from the note C4 to B4 (one octave). 
The piano senses human fingers when they are placed on the aluminum foil keys, which delivers electricity and completes the circuit.
Then this signal goes to the pin 13 which is connected to the buzzer, and plays the corresponding note.

*However, having all 12 keys did not work as intended (had delay of playing & not playing the note correctly). Currently in the process of modifying the code.

*Notes and frequency that are used: C4: 261.63, C#4/Db4: 277.18, D4: 293.66, D#4/Eb4: 311.13, E4: 329.63, F4: 349.23, F#4/Gb4: 369.99, G4: 392.00, G#4/Ab4: 415.30, A4: 440.00, A#4/Bb4: 466.16, B4: 493.88

Down below is the actual circuit for this project.

Used compnents: Arduino Uno, active buzzer, 1M resistors, aluminum foil keys, aligator clip wires

![image](https://user-images.githubusercontent.com/88179478/151736330-3fd164b4-ef8e-4408-af80-b0e8a7cfccd5.png)

![image](https://user-images.githubusercontent.com/88179478/151736351-ef1e641a-f017-4b72-aa00-e8240ac33200.png)

The image below is the prototype that created to check if the circuit is complete and works without any code.

![image](https://user-images.githubusercontent.com/88179478/151736516-cdb535e7-a91a-429d-84eb-51b2efbdb211.png)
