(define thing
	(cond
		((= 2 1) print 2)
		((= 1 2) print 3)
		((= 4 1) print 4)
		(else (print 7))))
;;(define printa
;;	(print "x"))
;;(define (printa (name)) 
	;(print name) 
	;(* 3 4))
;(define listaSensores
;	(print (read-line))
	;(let ((input read-line))
	;	(print input))
	;(list 1 2 3)
;	)
(define (sensorStruct name hash id type)
	(print (string-append "/*" name " structure definitions" "*/"))
	(print (string-append "#define h_" name " " hash))
	(print (string-append "#define ID_" name  " " id))
	(print (string-append "#define t_" name " "  type))
	(list name hash id type)
	)

;listaSensores