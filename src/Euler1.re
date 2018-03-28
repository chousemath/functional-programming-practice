/*
 If we list all the natural numbers below 10 that are multiples of 3 or 5,
 we get 3, 5, 6 and 9. The sum of these multiples is 23.
 Find the sum of all the multiples of 3 or 5 below 1000.
 */
let divisible = (x: int) : bool => x mod 3 === 0 || x mod 5 === 0;

let myList: list(int) =
  Array.init(999, i => i + 1) |> Array.to_list |> List.filter(divisible);

let mySum: int =
  List.fold_right((x: int, y: int) => (x + y: int), myList, 0);

Js.log(mySum);