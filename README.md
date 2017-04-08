# Voice-Operated-TIG-Welding-Controller
Use an Alexa/Siri style voice system to control your TIG welder.  Designed for handicapped welders without access to foot pedal controller.  The intent here is to create a complete package so that anybody who wanted to build their own would have a complete guide to hardware and software.  The intent is that the handicapped welder would wear a blue tooth headset with microphone under his helmet.  That would be linked to a Raspberry Pi Linux computer plugged into power and attached to the welder power supply.  The user could use voice commands to fully control the TIG welder power supply.  

The system is based on a Raspberry PI / Amazon Echo / Alexa voice activated controller system.

Voice Commands:

  - "quick tack", "tack weld", "quick burst"
  - "start arc", "start welding"
  - "increase current", "more current", "more juice", 'increase current to XXX amps"
  - "hold current" , "hold amperage",
  - "decrease current", "less current", "less juice"
  - "hold amperage"
  - "stop arc", "stop welding"


  The system would give verbal feedback to all commands, including current amperage numbers.

Parts List:

   - Raspberry Pi / Orange Pi Zero ()
   - Samsung 16GB EVO MicroSDXC Memory Card with Adapter MB-MP16DA/AM (Amazon, $6.99)
   - Power Supply, 2.0 Amp Travel Wall/Home USB Charger with Micro USB Sync Data Cable.  (Multiple, ~$10.00)
   - 2x13 Male/Male header Mfgr PN: PREC013DAAN-RC  Digikey PN: S2012EC-13-ND (Digikey, $0.53)
   - On/Off toggle switch
   - Connector compatible with your welder.
   - Protective Case
   - LED On indicator
   - Optoisolator, Mfgr PN: LTV-817 DigiKey PN: 160-1366-5-ND  $0.41
   - IC 10K Digital Potentiometer SPI, Mfgr PN: MCP41010-E/P Digikey PN: MCP41010-E/P-ND $1.50

Software Reference:

  - https://github.com/alexa/alexa-avs-sample-app
  - http://www.geek.com/tech/you-can-now-hack-together-your-own-amazon-echo-with-a-raspberry-pi-1679085/  (comment: FYI to anyone wanting to try this project - there are other options for (IMHO) better AI programs than Alexa/Siri/Cortana developed by Linux programmers. My personal favorite is JASPER, coded by two students. It's open source and available on Github. The advantage to building your own AI from scratch on a pi is that you can choose to use a local text to voice and voice to text engine, and local information repositories... (and)- you will have an AI that you can name anything you want to.)
  - https://github.com/jasperproject

  Orange Pi Zero
    Download Armbian Operating System (OS) from https://www.armbian.com/orange-pi-zero/
    Server Legacy 3.4.113 Debian Jessie

    Extract the OS image on your desktop/laptop computer via 7-Zip (windows), Keka (OSX), or 7z (Linux)
    Burn the image onto an Secure Digital (SD) card via the https://etcher.io/ tool.

    For first time boot up, it's easiest to use an ethernet cable.  

    Use Visual Studio with Orange PI
    https://blogs.msdn.microsoft.com/vcblog/2016/03/30/visual-c-for-linux-development/
