# ESP8266-12v-24v-Controller
Control 12/24vdc with PWM and a 2N22222
* may need to ad a flyback diode

 ![circuit](/images/2n2222.jpg)

## Replacing 2n2222 with P30N06LE
* The 2n2222 was running hot on my 24v LED projet, so I swaped in a P30N06LE
* Duty cycle 
  * 1% = 11.7 vdc
  * 25% = 14.7 vdc
  * 50% = 17.8 vdc
  * 75% = 20.8 vdc
  * 100% = 23.6 vdc
* I did not use C1 for the LED project

## Warning
* I have no clue what I'm doing.
