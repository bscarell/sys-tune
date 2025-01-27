[![Makefile CI](https://github.com/bscarell/losers/actions/workflows/makefile.yml/badge.svg?branch=master)](https://github.com/bscarell/losers/actions/workflows/makefile.yml)

EDIT2: update readme to force to compile/build/release/distzip in actions

EDIT: GREAT SUCCESS! GITHUB NOW BUILDS THE RELEASES AUTOMATICALLY - SEE ACTIONS TAB/PANEL ABOVE FOR UP TO DATE AUTOMATED BUILDS
one day ill ! clean my mess

# sys-tune
## Background audio player for the Nintendo switch + Tesla overlay

## Installation
1. Download the release zip from [here](https://github.com/HookedBehemoth/sys-tune/releases/latest)
2. Extract the zip to the root of your sd card.
3. Put mp3, flac, wav or wave files to your sd card.

You can manage playback via the Tesla overlay in the release.

## Screenshots
![Main](/sample/libtesla_1586882452.jpg)
![Main](/sample/libtesla_1586882672.jpg)
![Main](/sample/libtesla_1586882735.jpg)
(Alpha values are wrong in these screenshots. The overlay will be less transparent.)

## Special thanks to:
- [mackron](http://mackron.github.io/) who made the awesome [audio decoders used here.](https://github.com/mackron/dr_libs/)
- [WerWolv](https://werwolv.net/) for making libtesla, the UI library used for the control overlay.
- [TotalJustice](https://github.com/ITotalJustice) for bug fixes, adding some features and bad code.

## Info for developers
I implemented an IPC interface accessible via service wrappers [here](/ipc/).

My [Tesla overlay](/overlay/source/) uses these bindings.
