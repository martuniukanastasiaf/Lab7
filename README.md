# Лабораторна робота №7. Реалізація стеку

**Варіант 4:** Створити стек цілих чисел. Обчислити суму елементів стеку, які більші 5.

## Код програми
Див. файл `Lab7_Stack.cpp`.

## Блок-схема алгоритму

```mermaid
flowchart TD
    Start([Початок]) --> InputN[/"Введення кількості n"/]
    InputN --> InitStack["Ініціалізація стеку S"]
    InitStack --> LoopInput{"i < n?"}
    
    %% Цикл заповнення
    LoopInput -- Так --> InputVal[/"Введення числа x"/]
    InputVal --> Push["S.push(x)"]
    Push --> IncI["i++"]
    IncI --> LoopInput
    LoopInput -- Ні --> InitSum["Сума = 0"]

    %% Цикл обробки
    InitSum --> CheckEmpty{"Стек порожній?"}
    
    CheckEmpty -- Ні --> GetTop["val = S.top()"]
    GetTop --> CheckCond{"val > 5 ?"}
    
    CheckCond -- Так --> AddSum["Сума += val"]
    CheckCond -- Ні --> Pop["S.pop()"]
    
    AddSum --> Pop
    Pop --> CheckEmpty
    
    %% Виведення результату
    CheckEmpty -- Так --> Output[/"Виведення Суми"/]
    Output --> End([Кінець])
