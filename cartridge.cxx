#encoding "utf-8"    // сообщаем парсеру о том, в какой кодировке написана грамматика

Quantity -> 'шт' Word<wff=/[0-9]+/>;
Resource -> 'ресурс' Word* Word<wff=/[0-9]+/>;

S -> Resource interp (Cartridge.Resource)
     AnyWord*
     Quantity interp (Cartridge.Quantity);
