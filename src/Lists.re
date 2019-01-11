type myList('a) =
  | Nil
  | Cons('a, myList('a));

let abc = Cons("s", Cons("b", Cons("c", Nil)));

let regularList = [1, 2, 3];
let regularArray = [|1, 2, 3|];

Js.log(regularList);
Js.log(regularArray);