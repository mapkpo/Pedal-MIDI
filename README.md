# Pedal-MIDI
Pedal para control MIDI musical usando arduino uno


el proyecto consiste en usar crear un pedal para controlar efectos musicales en una pc con un pedal el cual es un arduino con botones y leds para avisar si el efecto està activo; y un firmware modificado para que el mismo sea reconocido como una controlador midi nativo usb y asi puede funcionar de manera nativa tanto en windows, mac o linux.

primero se debe cargar el codigo al arduino y luego modificar su firmware para que se convierta en midi usb con hiduino https://github.com/ddiakopoulos/hiduino
tener en cuenta que solo se puede usar con ciertos arduinos, en mi caso he usado el arduino uno pero debe ser la version que tiene chip desmontable ya que las otras no se puede programar su controlador.
