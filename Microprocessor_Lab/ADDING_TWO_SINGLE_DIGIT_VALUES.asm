.MODEL SMALL
.STACK 100H
.DATA
    MSG DB 'ENTER TWO INTEGER NUMBERS: ','$'
.CODE
MAIN PROC
    MOV AX,@DATA
    MOV DS,AX
    MOV AH,09
    LEA DX,MSG
    INT 21H
    
    MOV AH,01
    INT 21H
    MOV BL,AL
    INT 21H
    MOV BH,AL
    ;ADDITION
    SUB BL,30H
    SUB BH,30H
    ADD BL,BH
    
    ;NEWLINE
    MOV AH,02
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H
    
    ;OUTPUT
    MOV AH,02
    ADD BL,30H
    MOV DL,BL
    INT 21H
    
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN