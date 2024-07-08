/* Startup_cortex-m3.s
Eng. Saad Mohamed 

*/

.section .vectors

.word  0x20001000							/*stack top*/
.word  _reset							    /*1 reset*/
.word  vector_handler 						/*2 NMI*/
.word  vector_handler						/*3 Hard fault */
.word  vector_handler						/*4 MM Fault */
.word  vector_handler						/*5 Bus Fault */
.word  vector_handler						/*6 Usage fault */
.word  vector_handler						/*7 Reserved */
.word  vector_handler						/*8 Reserved */
.word  vector_handler						/*9 Reserved */
.word  vector_handler						/*10 Reserved */
.word  vector_handler						/*11 SVcall */
.word  vector_handler						/*12 Debug reserved */
.word  vector_handler						/*13 RESERVED */
.word  vector_handler						/*14 PendSV */
.word  vector_handler						/*15 Systick */
.word  vector_handler						/*16 IRQ0 */
.word  vector_handler						/*17 IRQ1 */
.word  vector_handler						/*18 IRQ2 */
.word  vector_handler 						/*19...*/
			/*on to IRQ67*/

.section .text
_reset:
	bl main
	b .
.thumb_func
	vector_handler:
	b   _reset