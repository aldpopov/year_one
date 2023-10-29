# Отчёт по лабораторной работе №7
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Попов Александр Дмитриевич

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Программирование с использованием нормального алгоритма Маркова(НАМ).
2. **Цель работы**: Научиться работать с НАМ, освоить базовые приёмы написания кода и реализовать свою первую программу.
3. **Задание:** Копирование троичного числа.
4. **Идея, метод, алгоритм решения задачи**: Продублировать все разряды числа, после чего при помощи маркеров поочерёдно перенести дубликаты в конец слова и поместить справа от '=';
5. **Сценарий выполнения работы**: Копирование троичного числа без потери или искажения изначальных данных; очистка от ведущих нулей справа от '='; тестирование;

| Входные данные | Выходные данные                        | Описание тестируемого случая                    |
|----------------|----------------------------------------|-------------------------------------------------|
| 000            | 000=0                                  | Тест №1                                         |
| 00102          | 00102=102                              | Тест №2                                         |
| 001110020      | 001110020=1110020                      | Тест №3                                         |
6. **Протокол**:
```
 ->*
0*->*00
1*->*11
2*->*22

*00->0#>0
*11->1#>1
*22->2#>2

>00->0>0
>01->1>0
>02->2>0

>10->0>1
>11->1>1
>12->2>1

>20->0>2
>21->1>2
>22->2>2

>0=->=&0
>1=->=&1
>2=->=&2

>0->=0
>1->=1
>2->=2

&00->0&0
&01->1&0
&02->2&0
&0&->&0

&10->0&1
&11->1&1
&12->2&1
&1&->&1

&20->0&2
&21->1&2
&22->2&2
&2&->&2

#0->0#>
#1->1#>
#2->2#>

&0->0
&1->1
&2->2

#=0->=!
!0->!
!1->1
!2->2
=!->=0
#=->=
```
7. **Замечания автора** по существу работы: Отсутствуют.
8. **Выводы**: Освоено базовое программировние с применением НАМ, которое поможет в разработке планов решения более трудных задач в дальнейшем. Изучены нюансы работы с маркерами в НАМ.