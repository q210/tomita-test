#encoding "utf-8"    // сообщаем парсеру о том, в какой кодировке написана грамматика

Russian -> Word<wff=/[а-яА-Я]+/>;
Resource -> 'ресурс' Russian* Word<wff=/[0-9]+/> interp (Cartridge.Resource);
Quantity -> 'шт' Russian* Word<wff=/[0-9]+/> interp (Cartridge.Quantity);

S -> Resource Word* Quantity;
