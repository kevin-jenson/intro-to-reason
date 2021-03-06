// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var List = require("bs-platform/lib/js/list.js");
var $$Array = require("bs-platform/lib/js/array.js");
var Curry = require("bs-platform/lib/js/curry.js");
var Caml_obj = require("bs-platform/lib/js/caml_obj.js");
var ArrayLabels = require("bs-platform/lib/js/arrayLabels.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var Caml_string = require("bs-platform/lib/js/caml_string.js");
var Caml_exceptions = require("bs-platform/lib/js/caml_exceptions.js");

var list = (function (param) {
      var param$1 = param;
      var param$2 = /* [] */0;
      return ArrayLabels.fold_right((function (ele, l) {
                    return /* :: */[
                            ele,
                            l
                          ];
                  }), param$1, param$2);
    })($$Array.of_list(List.map((function (prim) {
                return String(prim);
              }), List.rev(List.sort_uniq(Caml_obj.caml_compare, /* :: */[
                      8,
                      /* :: */[
                        5,
                        /* :: */[
                          3,
                          /* :: */[
                            5,
                            /* :: */[
                              2,
                              /* :: */[
                                6,
                                /* :: */[
                                  2,
                                  /* :: */[
                                    5,
                                    /* :: */[
                                      8,
                                      /* :: */[
                                        3,
                                        /* :: */[
                                          6,
                                          /* :: */[
                                            7,
                                            /* [] */0
                                          ]
                                        ]
                                      ]
                                    ]
                                  ]
                                ]
                              ]
                            ]
                          ]
                        ]
                      ]
                    ])))));

function nth(_list, _index) {
  while(true) {
    var index = _index;
    var list = _list;
    if (list) {
      if (index === 0) {
        return Caml_option.some(list[0]);
      } else {
        _index = index - 1 | 0;
        _list = list[1];
        continue ;
      }
    } else {
      return undefined;
    }
  };
}

function isogram(string) {
  return List.length(List.sort_uniq(Caml_obj.caml_compare, $$Array.to_list(string.split("")))) === string.length;
}

var OutOfRange = Caml_exceptions.create("Day2-MyNewProject.OutOfRange");

function ones(param) {
  switch (param) {
    case 48 : 
        return "";
    case 49 : 
        return "I";
    case 50 : 
        return "II";
    case 51 : 
        return "III";
    case 52 : 
        return "IV";
    case 53 : 
        return "V";
    case 54 : 
        return "VI";
    case 55 : 
        return "VII";
    case 56 : 
        return "VIII";
    case 57 : 
        return "IX";
    default:
      throw [
            OutOfRange,
            "Expected char between '0' and '9'"
          ];
  }
}

function tens(param) {
  switch (param) {
    case 48 : 
        return "";
    case 49 : 
        return "X";
    case 50 : 
        return "XX";
    case 51 : 
        return "XXX";
    case 52 : 
        return "XL";
    case 53 : 
        return "L";
    case 54 : 
        return "LX";
    case 55 : 
        return "LXX";
    case 56 : 
        return "LXXX";
    case 57 : 
        return "XC";
    default:
      throw [
            OutOfRange,
            "Expected char between '0' and '9'"
          ];
  }
}

function hundreds(param) {
  switch (param) {
    case 48 : 
        return "";
    case 49 : 
        return "C";
    case 50 : 
        return "CC";
    case 51 : 
        return "CCC";
    case 52 : 
        return "CD";
    case 53 : 
        return "D";
    case 54 : 
        return "DC";
    case 55 : 
        return "DCC";
    case 56 : 
        return "DCCC";
    case 57 : 
        return "CM";
    default:
      throw [
            OutOfRange,
            "Expected char between '0' and '9'"
          ];
  }
}

function thousands(param) {
  switch (param) {
    case 49 : 
        return "M";
    case 50 : 
        return "MM";
    case 51 : 
        return "MMM";
    default:
      throw [
            OutOfRange,
            "Expected char between '0' and '3'"
          ];
  }
}

function numberToRomanNumeral(number) {
  var str = String(number);
  var match = str.length;
  switch (match) {
    case 1 : 
        return ones(Caml_string.get(str, 0));
    case 2 : 
        return tens(Caml_string.get(str, 0)) + ones(Caml_string.get(str, 1));
    case 3 : 
        return hundreds(Caml_string.get(str, 0)) + (tens(Caml_string.get(str, 1)) + ones(Caml_string.get(str, 2)));
    case 4 : 
        return thousands(Caml_string.get(str, 0)) + (hundreds(Caml_string.get(str, 1)) + (tens(Caml_string.get(str, 2)) + ones(Caml_string.get(str, 3))));
    default:
      throw [
            OutOfRange,
            "Expected int with 1 to 4 digits"
          ];
  }
}

function insert(tree, compare, v) {
  if (tree) {
    var match = tree[0];
    var right = match[/* right */2];
    var left = match[/* left */1];
    var value = match[/* value */0];
    if (Curry._2(compare, v, value) === -1) {
      return /* Node */[/* record */[
                /* value */value,
                /* left */insert(left, compare, v),
                /* right */right
              ]];
    } else if (Curry._2(compare, v, value) === 1) {
      return /* Node */[/* record */[
                /* value */value,
                /* left */left,
                /* right */insert(right, compare, v)
              ]];
    } else {
      return tree;
    }
  } else {
    return /* Node */[/* record */[
              /* value */v,
              /* left : Empty */0,
              /* right : Empty */0
            ]];
  }
}

console.log(numberToRomanNumeral(10));

var testList = /* :: */[
  1,
  /* :: */[
    2,
    /* :: */[
      3,
      /* :: */[
        4,
        /* :: */[
          5,
          /* :: */[
            6,
            /* [] */0
          ]
        ]
      ]
    ]
  ]
];

var empty = /* Empty */0;

var bst = /* Node */[/* record */[
    /* value */1,
    /* left : Empty */0,
    /* right : Empty */0
  ]];

exports.list = list;
exports.nth = nth;
exports.testList = testList;
exports.isogram = isogram;
exports.OutOfRange = OutOfRange;
exports.ones = ones;
exports.tens = tens;
exports.hundreds = hundreds;
exports.thousands = thousands;
exports.numberToRomanNumeral = numberToRomanNumeral;
exports.empty = empty;
exports.bst = bst;
exports.insert = insert;
/* list Not a pure module */
