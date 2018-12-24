    IF !DEF(CONSTANTS_INCLUDED)
CONSTANTS_INCLUDED SET 1

;;;;;;;;;;;;;;; Hardware Constants ;;;;;;;;;;;

; HEADER OPTIONS 
NO_COLOUR_SUPPORT EQU $00
COLOUR_SUPPORT EQU $80
COLOUR_ONLY EQU $C0

UNLICENSED EQU "00"

SGB_SUPPORTED EQU $03
ROM_ONLY EQU $00
ROM_MBC1 EQU $01
ROM_MBC1_RAM EQU $02

ROM_32KB EQU $00
RAM_8KB EQU $02

FOREIGN_DESTINATION EQU $01

USE_NEW_LICENSEE_CODE EQU $33

; Interrupt Flags
INTERRUPT_VBLANK EQU %00000001

; Joypad Flags
JOYPAD_GET_BUTTONS EQU %0010000
JOYPAD_GET_DPAD EQU %00010000
JOYPAD_CLEAR EQU %00110000

; Audio Related
LEFT_SPEAKER_ON EQU %10000000
RIGHT_SPEAKER_ON EQU %00001000
MAX_VOLUME EQU %11111111

CHANNEL_4_LEFT_SPEAKER  EQU %00000000
CHANNEL_3_LEFT_SPEAKER  EQU %00000000
CHANNEL_2_LEFT_SPEAKER  EQU %00000000
CHANNEL_1_LEFT_SPEAKER  EQU %00000000
CHANNEL_4_RIGHT_SPEAKER EQU %00000000
CHANNEL_3_RIGHT_SPEAKER EQU %00000000
CHANNEL_2_RIGHT_SPEAKER EQU %00000000
CHANNEL_1_RIGHT_SPEAKER EQU %00000000

AUDIO_ON_BIT EQU 7

; LCD Flags
LCD_OFF EQU %00000000
LCD_ON EQU %10000000
LCD_ON_BIT EQU 7
WINDOW_MAP_1 EQU %00000000
WINDOW_MAP_2 EQU %01000000
WINDOW_OFF EQU %00000000
WINDOW_ON EQU %00100000
TILE_DATA_88 EQU %00000000
TILE_DATA_80 EQU %00010000
BACKGROUND_MAP_1 EQU %00000000
BACKGROUND_MAP_2 EQU %00001000
SQUARE_TILES EQU %00000000
LONG_TILES EQU %00000100
SPRITES_OFF EQU %00000000
SPRITES_ON EQU %00000010
BACKGROUND_OFF EQU %00000000
BACKGROUND_ON EQU %00000001
VRAM_BUSY EQU %00000010

SCREEN_HEIGHT EQU 144

; LCD Related
SCREEN_BYTE_WIDTH EQU 32
SCREEN_BYTE_HEIGHT EQU 32

; DMA Related

DMA_WAIT_TIME EQU $28
OAM_SIZE EQU $A0

    ENDC