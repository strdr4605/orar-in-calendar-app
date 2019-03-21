open Css;

global("html, body, ul", [margin(zero), padding(zero), color(hex("FFF8DC"))]);
global("ul", [listStyleType(none)]);
global("li", [margin2(~v=px(1), ~h=zero)]);

let main = style([backgroundColor(hex("FFF8DC")), display(flexBox), minHeight(vh(100.))]);
let column =
  style([
    padding(px(2)),
    backgroundColor(hex("DCB360")),
    width(px(100)),
    display(flexBox),
    flexDirection(column),
    margin(px(1)),
  ]);
let row =
  style([
    display(flexBox),
    alignItems(center),
    height(px(27)),
    backgroundColor(hex("0B5CBC")),
    border(px(1), solid, hex("DFD9D7")),
    borderRadius(px(3)),
    paddingLeft(px(5)),
  ]);