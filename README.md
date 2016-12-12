# Voice-Operated-TIG-Welding-Controller
Use an Alexa/Siri style voice system to control your TIG welder.  Designed for handicapped welders without access to foot pedal controller.  The intent here is to create a complete package so that anybody who wanted to build their own would have a complete guide to hardware and software.  The intent is that the handicapped welder would wear a blue tooth headset with microphone under his helmet.  That would be linked to a Raspberry Pi Linux computer plugged into power and attached to the welder power supply.  The user could use voice commands to fully control the TIG welder power supply.  

The system is based on a Raspberry PI / Amazon Echo / Alexa voice activated
 controller system.

Voice Commands:

  - "quick tack", "tack weld", "quick burst"
  - "start arc", "start welding"
  - "increase current", "more current", "more juice", 'increase current to XXX amps"
  - "hold current" , "hold amperage",
  - "decrease current", "less current", "less juice"
  - "hold amperage"
  - "Stop arc", "stop welding"


  The system would give verbal feedback to all commands, including current amperage numbers.

Parts List:

   - Raspberry Pi / Orange Pi
   - On/Off toggle switch
   - Power supply
   - Connector compatible with your welder.
   - Protective Case
   - LED On indicator

Software Reference:

  - https://github.com/alexa/alexa-avs-sample-app
  - http://www.geek.com/tech/you-can-now-hack-together-your-own-amazon-echo-with-a-raspberry-pi-1679085/  (comment: FYI to anyone wanting to try this project - there are other options for (IMHO) better AI programs than Alexa/Siri/Cortana developed by Linux programmers. My personal favorite is JASPER, coded by two students. It's open source and available on Github. The advantage to building your own AI from scratch on a pi is that you can choose to use a local text to voice and voice to text engine, and local information repositories... (and)- you will have an AI that you can name anything you want to.)
  - https://github.com/jasperproject
