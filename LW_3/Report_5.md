# Отчёт по лабораторной работе №5
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Попов Александр Дмитриевич

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Программирование с использованием машины Тьюринга.
2. **Цель работы**: Научиться программировать на машине Тьюринга в четвёрках, освоить базовые приёмы написания кода.
3. **Задание:** Перевод числа из восьмеричной системы счисления в двоичную с логарифмической сложностью.
4. **Идея, метод, алгоритм решения задачи**: Понять, как можно оптимизировать процесс перевода числа из системы в систему, то есть решить задачу без прибегания к лишнему шагу перевода в десятичную систему счисления; составить примеры для тестирования; написать программу; 
5. **Сценарий выполнения работы**: Копирование восьмеричного числа по "триадам" без потери или искажения изначального слова; тестирование;

| Входные данные | Выходные данные                        | Описание тестируемого случая                    |
|----------------|----------------------------------------|-------------------------------------------------|
| 156            | 1101110                                | Тест №1                                         |
| 1725           | 1111010101                             | Тест №2                                         |
| 12345670       | 1010011100101110111000                 | Тест №3                                         |
6. **Протокол**:
```
00, ,<,find
find,0,<,find
find,1,<,find
find,2,<,find
find,3,<,find
find,4,<,find
find,5,<,find
find,6,<,find
find,7,<,find
find, ,>,go
go,0, ,step_right_zero
go,1, ,step_right_one
go,2, ,step_right_two
go,3, ,step_right_three
go,4, ,step_right_four
go,5, ,step_right_five
go,6, ,step_right_six
go,7, ,step_right_seven
go, ,>,place_flag

step_right_zero, ,>,go_zero
go_zero,0,>,go_zero
go_zero,1,>,go_zero
go_zero,2,>,go_zero
go_zero,3,>,go_zero
go_zero,4,>,go_zero
go_zero,5,>,go_zero
go_zero,6,>,go_zero
go_zero,7,>,go_zero
go_zero, ,>,create_zero
create_zero,0,>,create_zero
create_zero,1,>,create_zero
create_zero, ,0,create_zero_sec
create_zero_sec,0,>,create_zero_sec
create_zero_sec, ,0,create_zero_third
create_zero_third,0,>,create_zero_third
create_zero_third, ,0,return_zero
return_zero,1,<,return_zero
return_zero,0,<,return_zero
return_zero, ,<,step_left_zero
step_left_zero,0,<,step_left_zero
step_left_zero,1,<,step_left_zero
step_left_zero,2,<,step_left_zero
step_left_zero,3,<,step_left_zero
step_left_zero,4,<,step_left_zero
step_left_zero,5,<,step_left_zero
step_left_zero,6,<,step_left_zero
step_left_zero,7,<,step_left_zero
step_left_zero, ,0,next

step_right_one, ,>,go_one
go_one,0,>,go_one
go_one,1,>,go_one
go_one,2,>,go_one
go_one,3,>,go_one
go_one,4,>,go_one
go_one,5,>,go_one
go_one,6,>,go_one
go_one,7,>,go_one
go_one, ,>,create_one
create_one,0,>,create_one
create_one,1,>,create_one
create_one, ,0,create_one_sec
create_one_sec,0,>,create_one_sec
create_one_sec, ,0,create_one_third
create_one_third,0,>,create_one_third
create_one_third, ,1,return_one
return_one,1,<,return_one
return_one,0,<,return_one
return_one, ,<,step_left_one
step_left_one,0,<,step_left_one
step_left_one,1,<,step_left_one
step_left_one,2,<,step_left_one
step_left_one,3,<,step_left_one
step_left_one,4,<,step_left_one
step_left_one,5,<,step_left_one
step_left_one,6,<,step_left_one
step_left_one,7,<,step_left_one
step_left_one, ,1,next

step_right_two, ,>,go_two
go_two,0,>,go_two
go_two,1,>,go_two
go_two,2,>,go_two
go_two,3,>,go_two
go_two,4,>,go_two
go_two,5,>,go_two
go_two,6,>,go_two
go_two,7,>,go_two
go_two, ,>,create_two
create_two,0,>,create_two
create_two,1,>,create_two
create_two, ,0,create_two_sec
create_two_sec,0,>,create_two_sec
create_two_sec, ,1,create_two_third
create_two_third,1,>,create_two_third
create_two_third, ,0,return_two
return_two,1,<,return_two
return_two,0,<,return_two
return_two, ,<,step_left_two
step_left_two,0,<,step_left_two
step_left_two,1,<,step_left_two
step_left_two,2,<,step_left_two
step_left_two,3,<,step_left_two
step_left_two,4,<,step_left_two
step_left_two,5,<,step_left_two
step_left_two,6,<,step_left_two
step_left_two,7,<,step_left_two
step_left_two, ,2,next

step_right_three, ,>,go_three
go_three,0,>,go_three
go_three,1,>,go_three
go_three,2,>,go_three
go_three,3,>,go_three
go_three,4,>,go_three
go_three,5,>,go_three
go_three,6,>,go_three
go_three,7,>,go_three
go_three, ,>,create_three
create_three,0,>,create_three
create_three,1,>,create_three
create_three, ,0,create_three_sec
create_three_sec,0,>,create_three_sec
create_three_sec, ,1,create_three_third
create_three_third,1,>,create_three_third
create_three_third, ,1,return_three
return_three,1,<,return_three
return_three,0,<,return_three
return_three, ,<,step_left_three
step_left_three,0,<,step_left_three
step_left_three,1,<,step_left_three
step_left_three,2,<,step_left_three
step_left_three,3,<,step_left_three
step_left_three,4,<,step_left_three
step_left_three,5,<,step_left_three
step_left_three,6,<,step_left_three
step_left_three,7,<,step_left_three
step_left_three, ,3,next

step_right_four, ,>,go_four
go_four,0,>,go_four
go_four,1,>,go_four
go_four,2,>,go_four
go_four,3,>,go_four
go_four,4,>,go_four
go_four,5,>,go_four
go_four,6,>,go_four
go_four,7,>,go_four
go_four, ,>,create_four
create_four,0,>,create_four
create_four,1,>,create_four
create_four, ,1,create_four_sec
create_four_sec,1,>,create_four_sec
create_four_sec, ,0,create_four_third
create_four_third,0,>,create_four_third
create_four_third, ,0,return_four
return_four,1,<,return_four
return_four,0,<,return_four
return_four, ,<,step_left_four
step_left_four,0,<,step_left_four
step_left_four,1,<,step_left_four
step_left_four,2,<,step_left_four
step_left_four,3,<,step_left_four
step_left_four,4,<,step_left_four
step_left_four,5,<,step_left_four
step_left_four,6,<,step_left_four
step_left_four,7,<,step_left_four
step_left_four, ,4,next

step_right_five, ,>,go_five
go_five,0,>,go_five
go_five,1,>,go_five
go_five,2,>,go_five
go_five,3,>,go_five
go_five,4,>,go_five
go_five,5,>,go_five
go_five,6,>,go_five
go_five,7,>,go_five
go_five, ,>,create_five
create_five,0,>,create_five
create_five,1,>,create_five
create_five, ,1,create_five_sec
create_five_sec,1,>,create_five_sec
create_five_sec, ,0,create_five_third
create_five_third,0,>,create_five_third
create_five_third, ,1,return_five
return_five,1,<,return_five
return_five,0,<,return_five
return_five, ,<,step_left_five
step_left_five,0,<,step_left_five
step_left_five,1,<,step_left_five
step_left_five,2,<,step_left_five
step_left_five,3,<,step_left_five
step_left_five,4,<,step_left_five
step_left_five,5,<,step_left_five
step_left_five,6,<,step_left_five
step_left_five,7,<,step_left_five
step_left_five, ,5,next

step_right_six, ,>,go_six
go_six,0,>,go_six
go_six,1,>,go_six
go_six,2,>,go_six
go_six,3,>,go_six
go_six,4,>,go_six
go_six,5,>,go_six
go_six,6,>,go_six
go_six,7,>,go_six
go_six, ,>,create_six
create_six,0,>,create_six
create_six,1,>,create_six
create_six, ,1,create_six_sec
create_six_sec,1,>,create_six_sec
create_six_sec, ,1,create_six_third
create_six_third,1,>,create_six_third
create_six_third, ,0,return_six
return_six,1,<,return_six
return_six,0,<,return_six
return_six, ,<,step_left_six
step_left_six,0,<,step_left_six
step_left_six,1,<,step_left_six
step_left_six,2,<,step_left_six
step_left_six,3,<,step_left_six
step_left_six,4,<,step_left_six
step_left_six,5,<,step_left_six
step_left_six,6,<,step_left_six
step_left_six,7,<,step_left_six
step_left_six, ,6,next

step_right_seven, ,>,go_seven
go_seven,0,>,go_seven
go_seven,1,>,go_seven
go_seven,2,>,go_seven
go_seven,3,>,go_seven
go_seven,4,>,go_seven
go_seven,5,>,go_seven
go_seven,6,>,go_seven
go_seven,7,>,go_seven
go_seven, ,>,create_seven
create_seven,0,>,create_seven
create_seven,1,>,create_seven
create_seven, ,1,create_seven_sec
create_seven_sec,1,>,create_seven_sec
create_seven_sec, ,1,create_seven_third
create_seven_third,1,>,create_seven_third
create_seven_third, ,1,return_seven
return_seven,1,<,return_seven
return_seven,0,<,return_seven
return_seven, ,<,step_left_seven
step_left_seven,0,<,step_left_seven
step_left_seven,1,<,step_left_seven
step_left_seven,2,<,step_left_seven
step_left_seven,3,<,step_left_seven
step_left_seven,4,<,step_left_seven
step_left_seven,5,<,step_left_seven
step_left_seven,6,<,step_left_seven
step_left_seven,7,<,step_left_seven
step_left_seven, ,7,next

next,0,>,go
next,1,>,go
next,2,>,go
next,3,>,go
next,4,>,go
next,5,>,go
next,6,>,go
next,7,>,go

place_flag,0,>,place_flag
place_flag,1,>,place_flag
place_flag, ,3,position

position,3,<,position
position,0,<,position
position,1,<,position
position, ,>,clean

clean, ,>,clean
clean,0,>,check
clean,1, ,copy_first_one
clean,3,3,copy_last_zero_step

check,1,<,delete_zero
check,0,<,delete_zero
check,3,<,delete_zero

delete_zero,0, ,clean

copy_first_one, ,<,copy_first_one
copy_first_one,0,>,space_one
copy_first_one,1,>,space_one
copy_first_one,2,>,space_one
copy_first_one,3,>,space_one
copy_first_one,4,>,space_one
copy_first_one,5,>,space_one
copy_first_one,6,>,space_one
copy_first_one,7,>,space_one
space_one, ,>,paste_one
paste_one, ,1,jump_one
jump_one,1,>,copy_next

copy_next, ,>,copy_next
copy_next,0, ,copy_zero
copy_next,1, ,copy_one
copy_next,3, ,go_end

copy_zero, ,<,copy_zero
copy_zero,0,>,paste_zero
copy_zero,1,>,paste_zero
paste_zero, ,0,jump_zero
jump_zero,0,>,copy_next

copy_one, ,<,copy_one
copy_one,0,>,paste_one
copy_one,1,>,paste_one

copy_last_zero_step,3,<,copy_last_zero
copy_last_zero, ,<,copy_last_zero
copy_last_zero,0,>,space_zero
space_zero, ,>,paste_zero

go_end, ,<,go_end
go_end,0,0,end
go_end,1,1,end

end,0,>,end
end,1,>,end
end, , ,end
```
7. **Замечания автора** по существу работы: Отсутствуют.
8. **Выводы**: Освоено базовое программировние с применением машины Тьюринга, которое поможет в разработке планов решения более трудных задач в дальнейшем.
