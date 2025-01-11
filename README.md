# LED_PROJECT-_USING_INTERRUPT_PROJECT

𝐈𝐧 𝐭𝐡𝐢𝐬 𝐓𝐚𝐬𝐤 𝐈 𝐧𝐞𝐞𝐝 𝐭𝐨 𝐜𝐨𝐧𝐧𝐞𝐜𝐭 𝟑 𝐋𝐄𝐃𝐬 𝐚𝐧𝐝 𝐚 𝐩𝐮𝐬𝐡 𝐛𝐮𝐭𝐭𝐨𝐧 𝐰𝐢𝐭𝐡 𝐒𝐓𝐌𝟑𝟐𝐅𝟒𝟎𝟕 𝐁𝐨𝐚𝐫𝐝. 𝐓𝐡𝐞 𝐬𝐞𝐭 𝐨𝐟 𝟑 𝐋𝐄𝐃𝐬 𝐰𝐢𝐥𝐥 𝐆𝐥𝐨𝐰 𝐨𝐧𝐞 𝐛𝐲 𝐨𝐧𝐞 𝐰𝐡𝐞𝐧 𝐭𝐡𝐞 𝐛𝐮𝐭𝐭𝐨𝐧 𝐢𝐬 𝐩𝐫𝐞𝐬𝐬𝐞𝐝.

Note: Performing the Task on hardware will be preferred but if you are unable to arrange it, you can perform it on any simulator too.

𝐓𝐚𝐬𝐤 𝐂𝐨𝐧𝐝𝐢𝐭𝐢𝐨𝐧𝐬:

STM32 Cube IDE can be used to program Arduino as well as generate the code
• For handling external interrupts, built-in functions can not be used.
• For manipulating LEDs, built-in functions  must not be used. Instead, the registers level programming should be done for it (read the datasheet).
• Code can be written in C/C++ language.
• The push button has a problem of flickering when pressed which should be solved by circuit or programming logic.
• The Push Buttons must be connected to the MCU with Hardware Interrupt.

𝐋𝐄𝐃 𝐩𝐚𝐭𝐭𝐞𝐫𝐧:
In starting all LEDs must be off, When the first time button will be pressed, 1st LED will glow, then when 2nd time button will be pressed, 2nd LED will glow, and the first will be off. The third time button will be pressed and 3rd LED will be on and 2nd will off. The 4th-time button will be pressed and all LED will be ON. And the cycle will repeat.

