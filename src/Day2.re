let list =
  [8, 5, 3, 5, 2, 6, 2, 5, 8, 3, 6, 7]
  |> List.sort_uniq(compare)
  |> List.rev
  |> List.map(string_of_int)
  |> Array.of_list
  |> ArrayLabels.fold_right(~f=(ele, l) => [ele, ...l], ~init=[]);

let rec nth = (list, index) => {
  switch (list) {
  | [] => None
  | [head, ...tail] when index == 0 => Some(head)
  | [head, ...tail] => nth(tail, index - 1)
  };
};

let testList = [1, 2, 3, 4, 5, 6];

let isogram = string => {
  string
  |> Js.String.split("")
  |> Array.to_list
  |> List.sort_uniq(compare)
  |> List.length === String.length(string);
};

exception OutOfRange(string);

let ones =
  fun
  | '0' => ""
  | '1' => "I"
  | '2' => "II"
  | '3' => "III"
  | '4' => "IV"
  | '5' => "V"
  | '6' => "VI"
  | '7' => "VII"
  | '8' => "VIII"
  | '9' => "IX"
  | _ => raise(OutOfRange("Expected char between '0' and '9'"));

let tens =
  fun
  | '0' => ""
  | '1' => "X"
  | '2' => "XX"
  | '3' => "XXX"
  | '4' => "XL"
  | '5' => "L"
  | '6' => "LX"
  | '7' => "LXX"
  | '8' => "LXXX"
  | '9' => "XC"
  | _ => raise(OutOfRange("Expected char between '0' and '9'"));

let hundreds =
  fun
  | '0' => ""
  | '1' => "C"
  | '2' => "CC"
  | '3' => "CCC"
  | '4' => "CD"
  | '5' => "D"
  | '6' => "DC"
  | '7' => "DCC"
  | '8' => "DCCC"
  | '9' => "CM"
  | _ => raise(OutOfRange("Expected char between '0' and '9'"));

let thousands =
  fun
  | '1' => "M"
  | '2' => "MM"
  | '3' => "MMM"
  | _ => raise(OutOfRange("Expected char between '0' and '3'"));

let numberToRomanNumeral = number => {
  let str = string_of_int(number);
  switch (String.length(str)) {
  | 1 => ones(str.[0])
  | 2 => tens(str.[0]) ++ ones(str.[1])
  | 3 => hundreds(str.[0]) ++ tens(str.[1]) ++ ones(str.[2])
  | 4 =>
    thousands(str.[0])
    ++ hundreds(str.[1])
    ++ tens(str.[2])
    ++ ones(str.[3])
  | _ => raise(OutOfRange("Expected int with 1 to 4 digits"))
  };
};

type binarySearchTree('a) =
  | Empty
  | Node(node('a))
and node('a) = {
  value: 'a,
  left: binarySearchTree('a),
  right: binarySearchTree('a),
};

let empty = Empty;
let bst = Node({value: 1, left: Empty, right: Empty});

let rec insert = (tree, compare, v) => {
  switch (tree) {
  | Empty => Node({value: v, left: Empty, right: Empty})
  | Node({value, left, right}) =>
    if (compare(v, value) == (-1)) {
      Node({value, left: insert(left, compare, v), right});
    } else if (compare(v, value) == 1) {
      Node({value, left, right: insert(right, compare, v)});
    } else {
      tree;
    }
  };
};

/* let rec remove = (tree, compare, v) => {
     switch (tree) {
     | Empty => Empty
     | Node({value, left: Empty, right: Empty}) =>
       compare(v, value) == 0 ? Empty : tree
     | Node({value, left: Node(_) as left, right: Empty as right}) =>
       compare(v, value) == 0 ?
         left : Node({value, left: remove(left, compare, v), right})
     | Node({value, left: Empty as left, right: Node(_) as right}) =>
       compare(v, value) == 0 ?
         right : Node({value, left, right: remove(right, compare, v)})
     };
   }; */

Js.log(numberToRomanNumeral(10));