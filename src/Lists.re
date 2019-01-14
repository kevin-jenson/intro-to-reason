type myList('a) =
  | Nil
  | Cons('a, myList('a));

let abc = Cons("s", Cons("b", Cons("c", Cons("d", Nil))));

let regularList = [1, 2, 3];

let rec length =
  fun
  | [] => 0
  | [_, ...rest] => 1 + length(rest);

[7, 2, 4, 5] |> List.sort(compare);

let rec removeAll = (~value, l) => {
  switch (l) {
  | [] => []
  | [head, ...tail] when head == value => removeAll(~value, tail)
  | [head, ...tail] => [head, ...removeAll(~value, tail)]
  };
};

[[2, 3, 4], [2, 3]] |> List.flatten |> Array.of_list;

Js.log([2, 3, 2, 3] |> List.fold_left((a, b) => a + b, 0));