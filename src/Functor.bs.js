// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';


function Make(RC) {
  var repeat = function ($staropt$star, str) {
    var times = $staropt$star !== undefined ? $staropt$star : RC[/* count */0];
    if (times <= 0) {
      return "";
    } else {
      return str + repeat(times, str);
    }
  };
  return /* module */[/* repeat */repeat];
}

exports.Make = Make;
/* No side effect */
