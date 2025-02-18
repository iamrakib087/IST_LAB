.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    MOV AX,@DATA
    MOV DS,AX

    
    MOV CL,26
    MOV DL,65
    
LOOP1:
    MOV AH,02
    INT 21H
    INC DL
    DEC CL
    JNZ LOOP1

    ; New line
    MOV AH,02
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H

    MOV CL,26
    MOV DL,97
    
LOOP2:
    MOV AH,02
    INT 21H
    INC DL
    DEC CL
    JNZ LOOP2

    ; End program
    MOV AH,4CH
    INT 21H
MAIN ENDP
END MAIN
