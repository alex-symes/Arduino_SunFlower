# 🌻 Arduino Sunflower Project

A fun and simple Arduino project designed for parents and kids to build together!

This project uses an Arduino UNO R3, a light-dependent resistor (LDR), and a servo motor to create a sunflower that "wakes up" when the light is on and "sleeps" when it's dark. The servo is attached to a handmade sunflower (crafted with chopsticks, construction paper, and tape) that raises and lowers based on the light level.

We originally powered the project with batteries, but found they drained quickly overnight due to the LDR's constant draw. Switching to USB or wall power is recommended for longer use.

**Why This Project?**

We built this over a few weekends as a family activity. It's a great introduction to basic electronics, coding, and crafting—perfect for doing with toddlers (you do the code, they do the tape and paper + jumper wires 🌻).

🧰 **What You’ll Need**
- Arduino UNO R3
- Light Dependent Resistor (LDR)
- Servo motor (e.g., SG90)
- 10k ohm resistor (for the LDR circuit)
- Jumper wires
- Breadboard
- USB cable or wall adapter for power
- Craft supplies for building your sunflower
  
---
💻 **How It Works**
The LDR senses ambient light. When it detects light above a certain threshold, it signals the servo to lift the sunflower. When it’s dark, the sunflower lowers again. It's a simple way to teach cause and effect with light and movement.

---
📁 **Code**
The code is available in this repo. Just upload it to your Arduino using the Arduino IDE.



## See the fritzing for help with wiring.


![sunflower fritzing sketch_bb](https://user-images.githubusercontent.com/34386680/38449628-49d6648c-39df-11e8-904d-fc7bbf2832da.png)


## Example result.

![sunflower pic](https://user-images.githubusercontent.com/34386680/38471845-eefd06f8-3b44-11e8-907b-dc543287f546.JPG)
