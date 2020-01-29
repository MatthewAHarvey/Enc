# Enc
 Base Rotary Encoder Class for use with Arduinos

This is a simple to use rotary encoder class that uses a state look up table to report clockwise and anti-clockwise steps. It assertain whether transitions are valid and automatically handles debouncing and rejects invalid transitions due to cheap/noisy encoders.

Documentation on the loopup table method will come later but you can check the Excel spreadsheet and the pdf for hints.

See Enc.ino for a simple Arduino example program.

For best performance, use the .poll() method inside an interrupt routine triggered by a change in either pins A or B.