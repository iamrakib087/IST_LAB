.MODEL SMALL
.STACK 100H
.DATA
    NUM1 DB 5
    NUM2 DB ?
.CODE
MAIN PROC
    MOV AX,@DATA
    MOV DS,AX
    ;OUTPUT
    MOV AH,02
    MOV DL,NUM1
    ADD DL,30H
    INT 21H
    ;NEW LINE
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H
    ;INPUT
    MOV AH,01
    INT 21H
    MOV NUM2,AL
    
    ;NEW LINE
    MOV AH,02
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H
    
    MOV DL,NUM2
    MOV AH,02
    INT 21H

   
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN