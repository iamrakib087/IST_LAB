.MODEL SMALL
.STAC 100H
.DATA
.CODE
MAIN PROC
    MOV AH,01 ;INPUT
    INT 21H   ;VALUE STORED IN AL
    MOV BL,AL
    
    MOV AH,02
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H
    
    MOV DL,BL ;DL=BL
    INT 21H
    
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN