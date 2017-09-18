#encoding "utf-8"    // сообщаем парсеру о том, в какой кодировке написана грамматика

NotRussian -> Word<wff=/[^а-яА-Я]+/>;
Type -> Word<kwtype="типы">;
Company -> Word<kwtype="компании">;

S -> Type interp (Printer.Type)
     Company interp (Printer.Company)
     NotRussian+ interp (Printer.Model);

S -> Company interp (Printer.Company)
     NotRussian+ interp (Printer.Model);
