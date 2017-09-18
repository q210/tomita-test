#encoding "utf-8"    // сообщаем парсеру о том, в какой кодировке написана грамматика
#GRAMMAR_ROOT S     // указываем корневой нетерминал грамматики

NotRussian -> AnyWord<wff=/[^а-яА-Я]+/>;

S -> Word<kwtype="типы"> Word<kwtype="компании"> NotRussian+;
S -> Word<kwtype="компании"> NotRussian+;
