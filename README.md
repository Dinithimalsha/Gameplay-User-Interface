UCMS - Ultimate CommonUI Menu System

Features
Comprehensive Game Menu System: A fully functional game menu with extensive settings and options.
Prompt System: User-friendly prompts for streamlined interaction.
Advanced Options Menu: Includes a vast array of settings for graphics, display, TSR/DLSS/FSR/XeSS, audio (music, ambient, SFX, voice, etc.), input mapping, and more. Each setting follows UI guidelines and caters to different user preferences.
Details Panel: Provides detailed information on hovered settings. (Currently under development as information is extensive.)
Save and Reapply System: Settings are saved on exit and reloaded on game start or level change.
Main Menu with Immersive Background: Includes a dynamic background map and camera movements.
Animated Character Selection: A visually engaging character selection screen.
Pause Menu: Accessible via "²" or "Escape" in standalone mode.
Full Controller and Keyboard Support: Navigate menus with ease using controllers or keyboard arrows.
Simple Notification System: Offers straightforward, in-game notifications.
Partial French Localization: Partially localized in French, with the flexibility for additional translations.
Optimized Performance: Uses minimal canvas panels to enhance performance.
Easy Integration: Ready to integrate into your project. For setup details, visit the Wiki.
Try It Yourself
Experience UCMS firsthand! Regular releases are available with pre-packaged versions—no need to have Unreal Engine installed. Just download, extract, and run the .exe. Additionally, a build of the City Sample is in progress, showcasing UCMS in a real game setting, complete with gameplay features. Try it out by downloading the Google Drive link from the latest Release.

Project Goal
The goal of UCMS is to offer a highly customizable, complete game menu system. It provides extensive options, from graphics settings to a beautiful main menu, all designed to save development time. This Blueprint-based system is open to contributions, so users can enhance it further to meet community needs. Check out the Wiki for more information.

Branches
Here are the current branches:

main: Uses Unreal Engine 5.4, suitable for most projects.
5.3: For Unreal Engine 5.3 users, though updates have stopped for this branch.
NvRTX: Includes additional settings from the NvRTX branch (Unreal Engine 5.3).
Lyra: Styled like the Lyra menu, using Unreal Engine 5.4.
Enhanced Inputs: Experimental branch for Enhanced Inputs with CommonUI (Unreal Engine 5.3).
Plugins Used
UCMS utilizes several external plugins, some of which are bundled in the project files:

Name	Description
NVIDIA DLSS 3.7	AI-driven rendering for enhanced frame rates and image quality.
AMD FidelityFX Super Resolution 3.1	Upscaling technology for smoother animations and improved frame pacing.
Intel Xe Super Sampling	AI-based upscaling for higher frame rates with minimal quality loss.
Async Loading Screen	Allows for customized loading screens with minimal setup.
Integrated Plugins
Common UI
Cine Camera Rigs
Steam Controller
Accessing the Menu
Main Menu: Automatically launched at startup.
Pause Menu: Access via "²", "Escape," or "Start/Options" on a controller.
Usage Terms
UCMS is free to use in your projects.
Credit required: Please attribute the base UI as "UCMS Base UI" or similar.
Recommendations
For the best experience, run UCMS in "Standalone Game" mode. This minimizes the risk of engine crashes during testing and provides a more accurate player experience.

Known Bugs
No known issues currently.

Roadmap
Enhance the Enhanced Input system implementation.
Add setting comparison images and customized description widgets where needed.
Address existing bugs and user feedback.
Potential C++ Enhancements
Implement CommonBoundActionBar actions directly.
Improve button style transitions for keyboard/controller navigation.
Expand the prompt system and automate tab views for a more streamlined experience.
