/* Generated code for Python module 'simpleANSI.cursor'
 * created by Nuitka version 0.6.19.4
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_simpleANSI$cursor" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_simpleANSI$cursor;
PyDictObject *moduledict_simpleANSI$cursor;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[36];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[36];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("simpleANSI.cursor"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 36; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_simpleANSI$cursor(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 36; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c073e02684a464b7310c4919d33e77ba;
static PyCodeObject *codeobj_c9b8e46f466660c777a7233d1c338132;
static PyCodeObject *codeobj_5f276c949601eebb7f9c58dbde29a928;
static PyCodeObject *codeobj_7957a24238fbeaec3352fe2547a6ce49;
static PyCodeObject *codeobj_7020db2375acb5b69b1ec7e646bed7dd;
static PyCodeObject *codeobj_5065ee5a0709dc2fcd4b5f6ec163141b;
static PyCodeObject *codeobj_4dd6457b07917f67a28aff5a843aab81;
static PyCodeObject *codeobj_c27e8721afebc15af86a63f9ef97f4b6;
static PyCodeObject *codeobj_2674c007d427b1f6aa9cb59553049d6b;
static PyCodeObject *codeobj_02703aa8d1fecfd7629b212ea7680650;
static PyCodeObject *codeobj_2c3c57419abce028138d65dc8d20c2ad;
static PyCodeObject *codeobj_7d1b1c97e32bfa4c7d488b0c636d0d1c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[29]); CHECK_OBJECT(module_filename_obj);
    codeobj_c073e02684a464b7310c4919d33e77ba = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[30], NULL, NULL, 0, 0, 0);
    codeobj_c9b8e46f466660c777a7233d1c338132 = MAKE_CODEOBJECT(module_filename_obj, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], NULL, NULL, 0, 0, 0);
    codeobj_5f276c949601eebb7f9c58dbde29a928 = MAKE_CODEOBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[31], NULL, 1, 0, 0);
    codeobj_7957a24238fbeaec3352fe2547a6ce49 = MAKE_CODEOBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[31], NULL, 1, 0, 0);
    codeobj_7020db2375acb5b69b1ec7e646bed7dd = MAKE_CODEOBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[31], NULL, 1, 0, 0);
    codeobj_5065ee5a0709dc2fcd4b5f6ec163141b = MAKE_CODEOBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[32], NULL, 1, 0, 0);
    codeobj_4dd6457b07917f67a28aff5a843aab81 = MAKE_CODEOBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[32], NULL, 1, 0, 0);
    codeobj_c27e8721afebc15af86a63f9ef97f4b6 = MAKE_CODEOBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[33], NULL, 2, 0, 0);
    codeobj_2674c007d427b1f6aa9cb59553049d6b = MAKE_CODEOBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[34], NULL, 1, 0, 0);
    codeobj_02703aa8d1fecfd7629b212ea7680650 = MAKE_CODEOBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[31], NULL, 1, 0, 0);
    codeobj_2c3c57419abce028138d65dc8d20c2ad = MAKE_CODEOBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], NULL, NULL, 0, 0, 0);
    codeobj_7d1b1c97e32bfa4c7d488b0c636d0d1c = MAKE_CODEOBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__10_savePos();


static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__11_restorePos();


static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__1_home();


static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__2_moveTo();


static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__3_moveUpBy();


static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__4_moveDownBy();


static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__5_moveRightBy();


static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__6_moveLeftBy();


static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__7_moveBegNext();


static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__8_moveBegPrev();


static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__9_moveToCol();


// The module function definitions.
static PyObject *impl_simpleANSI$cursor$$$function__2_moveTo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_column = python_pars[0];
    PyObject *par_line = python_pars[1];
    struct Nuitka_FrameObject *frame_c27e8721afebc15af86a63f9ef97f4b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c27e8721afebc15af86a63f9ef97f4b6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c27e8721afebc15af86a63f9ef97f4b6)) {
        Py_XDECREF(cache_frame_c27e8721afebc15af86a63f9ef97f4b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c27e8721afebc15af86a63f9ef97f4b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c27e8721afebc15af86a63f9ef97f4b6 = MAKE_FUNCTION_FRAME(codeobj_c27e8721afebc15af86a63f9ef97f4b6, module_simpleANSI$cursor, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c27e8721afebc15af86a63f9ef97f4b6->m_type_description == NULL);
    frame_c27e8721afebc15af86a63f9ef97f4b6 = cache_frame_c27e8721afebc15af86a63f9ef97f4b6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c27e8721afebc15af86a63f9ef97f4b6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c27e8721afebc15af86a63f9ef97f4b6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = mod_consts[0];
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_line);
        tmp_args_element_value_1 = par_line;
        CHECK_OBJECT(par_column);
        tmp_args_element_value_2 = par_column;
        frame_c27e8721afebc15af86a63f9ef97f4b6->m_frame.f_lineno = 6;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c27e8721afebc15af86a63f9ef97f4b6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c27e8721afebc15af86a63f9ef97f4b6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c27e8721afebc15af86a63f9ef97f4b6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c27e8721afebc15af86a63f9ef97f4b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c27e8721afebc15af86a63f9ef97f4b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c27e8721afebc15af86a63f9ef97f4b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c27e8721afebc15af86a63f9ef97f4b6,
        type_description_1,
        par_column,
        par_line
    );


    // Release cached frame if used for exception.
    if (frame_c27e8721afebc15af86a63f9ef97f4b6 == cache_frame_c27e8721afebc15af86a63f9ef97f4b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c27e8721afebc15af86a63f9ef97f4b6);
        cache_frame_c27e8721afebc15af86a63f9ef97f4b6 = NULL;
    }

    assertFrameObject(frame_c27e8721afebc15af86a63f9ef97f4b6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);
    CHECK_OBJECT(par_line);
    Py_DECREF(par_line);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);
    CHECK_OBJECT(par_line);
    Py_DECREF(par_line);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_simpleANSI$cursor$$$function__3_moveUpBy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_lines = python_pars[0];
    struct Nuitka_FrameObject *frame_02703aa8d1fecfd7629b212ea7680650;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_02703aa8d1fecfd7629b212ea7680650 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_02703aa8d1fecfd7629b212ea7680650)) {
        Py_XDECREF(cache_frame_02703aa8d1fecfd7629b212ea7680650);

#if _DEBUG_REFCOUNTS
        if (cache_frame_02703aa8d1fecfd7629b212ea7680650 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_02703aa8d1fecfd7629b212ea7680650 = MAKE_FUNCTION_FRAME(codeobj_02703aa8d1fecfd7629b212ea7680650, module_simpleANSI$cursor, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_02703aa8d1fecfd7629b212ea7680650->m_type_description == NULL);
    frame_02703aa8d1fecfd7629b212ea7680650 = cache_frame_02703aa8d1fecfd7629b212ea7680650;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_02703aa8d1fecfd7629b212ea7680650);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_02703aa8d1fecfd7629b212ea7680650) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = mod_consts[2];
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_lines);
        tmp_args_element_value_1 = par_lines;
        frame_02703aa8d1fecfd7629b212ea7680650->m_frame.f_lineno = 9;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_02703aa8d1fecfd7629b212ea7680650);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_02703aa8d1fecfd7629b212ea7680650);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_02703aa8d1fecfd7629b212ea7680650);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_02703aa8d1fecfd7629b212ea7680650, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_02703aa8d1fecfd7629b212ea7680650->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_02703aa8d1fecfd7629b212ea7680650, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_02703aa8d1fecfd7629b212ea7680650,
        type_description_1,
        par_lines
    );


    // Release cached frame if used for exception.
    if (frame_02703aa8d1fecfd7629b212ea7680650 == cache_frame_02703aa8d1fecfd7629b212ea7680650) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_02703aa8d1fecfd7629b212ea7680650);
        cache_frame_02703aa8d1fecfd7629b212ea7680650 = NULL;
    }

    assertFrameObject(frame_02703aa8d1fecfd7629b212ea7680650);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_simpleANSI$cursor$$$function__4_moveDownBy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_lines = python_pars[0];
    struct Nuitka_FrameObject *frame_7020db2375acb5b69b1ec7e646bed7dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7020db2375acb5b69b1ec7e646bed7dd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7020db2375acb5b69b1ec7e646bed7dd)) {
        Py_XDECREF(cache_frame_7020db2375acb5b69b1ec7e646bed7dd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7020db2375acb5b69b1ec7e646bed7dd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7020db2375acb5b69b1ec7e646bed7dd = MAKE_FUNCTION_FRAME(codeobj_7020db2375acb5b69b1ec7e646bed7dd, module_simpleANSI$cursor, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7020db2375acb5b69b1ec7e646bed7dd->m_type_description == NULL);
    frame_7020db2375acb5b69b1ec7e646bed7dd = cache_frame_7020db2375acb5b69b1ec7e646bed7dd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7020db2375acb5b69b1ec7e646bed7dd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7020db2375acb5b69b1ec7e646bed7dd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = mod_consts[3];
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_lines);
        tmp_args_element_value_1 = par_lines;
        frame_7020db2375acb5b69b1ec7e646bed7dd->m_frame.f_lineno = 12;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7020db2375acb5b69b1ec7e646bed7dd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7020db2375acb5b69b1ec7e646bed7dd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7020db2375acb5b69b1ec7e646bed7dd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7020db2375acb5b69b1ec7e646bed7dd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7020db2375acb5b69b1ec7e646bed7dd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7020db2375acb5b69b1ec7e646bed7dd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7020db2375acb5b69b1ec7e646bed7dd,
        type_description_1,
        par_lines
    );


    // Release cached frame if used for exception.
    if (frame_7020db2375acb5b69b1ec7e646bed7dd == cache_frame_7020db2375acb5b69b1ec7e646bed7dd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7020db2375acb5b69b1ec7e646bed7dd);
        cache_frame_7020db2375acb5b69b1ec7e646bed7dd = NULL;
    }

    assertFrameObject(frame_7020db2375acb5b69b1ec7e646bed7dd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_simpleANSI$cursor$$$function__5_moveRightBy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_columns = python_pars[0];
    struct Nuitka_FrameObject *frame_4dd6457b07917f67a28aff5a843aab81;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4dd6457b07917f67a28aff5a843aab81 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4dd6457b07917f67a28aff5a843aab81)) {
        Py_XDECREF(cache_frame_4dd6457b07917f67a28aff5a843aab81);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4dd6457b07917f67a28aff5a843aab81 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4dd6457b07917f67a28aff5a843aab81 = MAKE_FUNCTION_FRAME(codeobj_4dd6457b07917f67a28aff5a843aab81, module_simpleANSI$cursor, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4dd6457b07917f67a28aff5a843aab81->m_type_description == NULL);
    frame_4dd6457b07917f67a28aff5a843aab81 = cache_frame_4dd6457b07917f67a28aff5a843aab81;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4dd6457b07917f67a28aff5a843aab81);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4dd6457b07917f67a28aff5a843aab81) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = mod_consts[4];
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_columns);
        tmp_args_element_value_1 = par_columns;
        frame_4dd6457b07917f67a28aff5a843aab81->m_frame.f_lineno = 15;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4dd6457b07917f67a28aff5a843aab81);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4dd6457b07917f67a28aff5a843aab81);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4dd6457b07917f67a28aff5a843aab81);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4dd6457b07917f67a28aff5a843aab81, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4dd6457b07917f67a28aff5a843aab81->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4dd6457b07917f67a28aff5a843aab81, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4dd6457b07917f67a28aff5a843aab81,
        type_description_1,
        par_columns
    );


    // Release cached frame if used for exception.
    if (frame_4dd6457b07917f67a28aff5a843aab81 == cache_frame_4dd6457b07917f67a28aff5a843aab81) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4dd6457b07917f67a28aff5a843aab81);
        cache_frame_4dd6457b07917f67a28aff5a843aab81 = NULL;
    }

    assertFrameObject(frame_4dd6457b07917f67a28aff5a843aab81);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_columns);
    Py_DECREF(par_columns);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_columns);
    Py_DECREF(par_columns);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_simpleANSI$cursor$$$function__6_moveLeftBy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_columns = python_pars[0];
    struct Nuitka_FrameObject *frame_5065ee5a0709dc2fcd4b5f6ec163141b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5065ee5a0709dc2fcd4b5f6ec163141b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5065ee5a0709dc2fcd4b5f6ec163141b)) {
        Py_XDECREF(cache_frame_5065ee5a0709dc2fcd4b5f6ec163141b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5065ee5a0709dc2fcd4b5f6ec163141b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5065ee5a0709dc2fcd4b5f6ec163141b = MAKE_FUNCTION_FRAME(codeobj_5065ee5a0709dc2fcd4b5f6ec163141b, module_simpleANSI$cursor, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5065ee5a0709dc2fcd4b5f6ec163141b->m_type_description == NULL);
    frame_5065ee5a0709dc2fcd4b5f6ec163141b = cache_frame_5065ee5a0709dc2fcd4b5f6ec163141b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5065ee5a0709dc2fcd4b5f6ec163141b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5065ee5a0709dc2fcd4b5f6ec163141b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = mod_consts[5];
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_columns);
        tmp_args_element_value_1 = par_columns;
        frame_5065ee5a0709dc2fcd4b5f6ec163141b->m_frame.f_lineno = 18;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5065ee5a0709dc2fcd4b5f6ec163141b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5065ee5a0709dc2fcd4b5f6ec163141b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5065ee5a0709dc2fcd4b5f6ec163141b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5065ee5a0709dc2fcd4b5f6ec163141b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5065ee5a0709dc2fcd4b5f6ec163141b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5065ee5a0709dc2fcd4b5f6ec163141b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5065ee5a0709dc2fcd4b5f6ec163141b,
        type_description_1,
        par_columns
    );


    // Release cached frame if used for exception.
    if (frame_5065ee5a0709dc2fcd4b5f6ec163141b == cache_frame_5065ee5a0709dc2fcd4b5f6ec163141b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5065ee5a0709dc2fcd4b5f6ec163141b);
        cache_frame_5065ee5a0709dc2fcd4b5f6ec163141b = NULL;
    }

    assertFrameObject(frame_5065ee5a0709dc2fcd4b5f6ec163141b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_columns);
    Py_DECREF(par_columns);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_columns);
    Py_DECREF(par_columns);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_simpleANSI$cursor$$$function__7_moveBegNext(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_lines = python_pars[0];
    struct Nuitka_FrameObject *frame_5f276c949601eebb7f9c58dbde29a928;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5f276c949601eebb7f9c58dbde29a928 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5f276c949601eebb7f9c58dbde29a928)) {
        Py_XDECREF(cache_frame_5f276c949601eebb7f9c58dbde29a928);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f276c949601eebb7f9c58dbde29a928 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f276c949601eebb7f9c58dbde29a928 = MAKE_FUNCTION_FRAME(codeobj_5f276c949601eebb7f9c58dbde29a928, module_simpleANSI$cursor, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5f276c949601eebb7f9c58dbde29a928->m_type_description == NULL);
    frame_5f276c949601eebb7f9c58dbde29a928 = cache_frame_5f276c949601eebb7f9c58dbde29a928;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5f276c949601eebb7f9c58dbde29a928);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5f276c949601eebb7f9c58dbde29a928) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = mod_consts[6];
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_lines);
        tmp_args_element_value_1 = par_lines;
        frame_5f276c949601eebb7f9c58dbde29a928->m_frame.f_lineno = 21;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f276c949601eebb7f9c58dbde29a928);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f276c949601eebb7f9c58dbde29a928);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f276c949601eebb7f9c58dbde29a928);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f276c949601eebb7f9c58dbde29a928, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f276c949601eebb7f9c58dbde29a928->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f276c949601eebb7f9c58dbde29a928, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f276c949601eebb7f9c58dbde29a928,
        type_description_1,
        par_lines
    );


    // Release cached frame if used for exception.
    if (frame_5f276c949601eebb7f9c58dbde29a928 == cache_frame_5f276c949601eebb7f9c58dbde29a928) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5f276c949601eebb7f9c58dbde29a928);
        cache_frame_5f276c949601eebb7f9c58dbde29a928 = NULL;
    }

    assertFrameObject(frame_5f276c949601eebb7f9c58dbde29a928);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_simpleANSI$cursor$$$function__8_moveBegPrev(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_lines = python_pars[0];
    struct Nuitka_FrameObject *frame_7957a24238fbeaec3352fe2547a6ce49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7957a24238fbeaec3352fe2547a6ce49 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7957a24238fbeaec3352fe2547a6ce49)) {
        Py_XDECREF(cache_frame_7957a24238fbeaec3352fe2547a6ce49);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7957a24238fbeaec3352fe2547a6ce49 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7957a24238fbeaec3352fe2547a6ce49 = MAKE_FUNCTION_FRAME(codeobj_7957a24238fbeaec3352fe2547a6ce49, module_simpleANSI$cursor, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7957a24238fbeaec3352fe2547a6ce49->m_type_description == NULL);
    frame_7957a24238fbeaec3352fe2547a6ce49 = cache_frame_7957a24238fbeaec3352fe2547a6ce49;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7957a24238fbeaec3352fe2547a6ce49);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7957a24238fbeaec3352fe2547a6ce49) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = mod_consts[7];
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_lines);
        tmp_args_element_value_1 = par_lines;
        frame_7957a24238fbeaec3352fe2547a6ce49->m_frame.f_lineno = 24;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7957a24238fbeaec3352fe2547a6ce49);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7957a24238fbeaec3352fe2547a6ce49);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7957a24238fbeaec3352fe2547a6ce49);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7957a24238fbeaec3352fe2547a6ce49, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7957a24238fbeaec3352fe2547a6ce49->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7957a24238fbeaec3352fe2547a6ce49, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7957a24238fbeaec3352fe2547a6ce49,
        type_description_1,
        par_lines
    );


    // Release cached frame if used for exception.
    if (frame_7957a24238fbeaec3352fe2547a6ce49 == cache_frame_7957a24238fbeaec3352fe2547a6ce49) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7957a24238fbeaec3352fe2547a6ce49);
        cache_frame_7957a24238fbeaec3352fe2547a6ce49 = NULL;
    }

    assertFrameObject(frame_7957a24238fbeaec3352fe2547a6ce49);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_simpleANSI$cursor$$$function__9_moveToCol(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_column = python_pars[0];
    struct Nuitka_FrameObject *frame_2674c007d427b1f6aa9cb59553049d6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2674c007d427b1f6aa9cb59553049d6b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2674c007d427b1f6aa9cb59553049d6b)) {
        Py_XDECREF(cache_frame_2674c007d427b1f6aa9cb59553049d6b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2674c007d427b1f6aa9cb59553049d6b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2674c007d427b1f6aa9cb59553049d6b = MAKE_FUNCTION_FRAME(codeobj_2674c007d427b1f6aa9cb59553049d6b, module_simpleANSI$cursor, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2674c007d427b1f6aa9cb59553049d6b->m_type_description == NULL);
    frame_2674c007d427b1f6aa9cb59553049d6b = cache_frame_2674c007d427b1f6aa9cb59553049d6b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2674c007d427b1f6aa9cb59553049d6b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2674c007d427b1f6aa9cb59553049d6b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = mod_consts[8];
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_column);
        tmp_args_element_value_1 = par_column;
        frame_2674c007d427b1f6aa9cb59553049d6b->m_frame.f_lineno = 27;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2674c007d427b1f6aa9cb59553049d6b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2674c007d427b1f6aa9cb59553049d6b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2674c007d427b1f6aa9cb59553049d6b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2674c007d427b1f6aa9cb59553049d6b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2674c007d427b1f6aa9cb59553049d6b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2674c007d427b1f6aa9cb59553049d6b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2674c007d427b1f6aa9cb59553049d6b,
        type_description_1,
        par_column
    );


    // Release cached frame if used for exception.
    if (frame_2674c007d427b1f6aa9cb59553049d6b == cache_frame_2674c007d427b1f6aa9cb59553049d6b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2674c007d427b1f6aa9cb59553049d6b);
        cache_frame_2674c007d427b1f6aa9cb59553049d6b = NULL;
    }

    assertFrameObject(frame_2674c007d427b1f6aa9cb59553049d6b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__10_savePos() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d1b1c97e32bfa4c7d488b0c636d0d1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_simpleANSI$cursor,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[25]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__11_restorePos() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c3c57419abce028138d65dc8d20c2ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_simpleANSI$cursor,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[27]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__1_home() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c9b8e46f466660c777a7233d1c338132,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_simpleANSI$cursor,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[15]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__2_moveTo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simpleANSI$cursor$$$function__2_moveTo,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c27e8721afebc15af86a63f9ef97f4b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_simpleANSI$cursor,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__3_moveUpBy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simpleANSI$cursor$$$function__3_moveUpBy,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_02703aa8d1fecfd7629b212ea7680650,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_simpleANSI$cursor,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__4_moveDownBy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simpleANSI$cursor$$$function__4_moveDownBy,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7020db2375acb5b69b1ec7e646bed7dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_simpleANSI$cursor,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__5_moveRightBy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simpleANSI$cursor$$$function__5_moveRightBy,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4dd6457b07917f67a28aff5a843aab81,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_simpleANSI$cursor,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__6_moveLeftBy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simpleANSI$cursor$$$function__6_moveLeftBy,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5065ee5a0709dc2fcd4b5f6ec163141b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_simpleANSI$cursor,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__7_moveBegNext() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simpleANSI$cursor$$$function__7_moveBegNext,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5f276c949601eebb7f9c58dbde29a928,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_simpleANSI$cursor,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__8_moveBegPrev() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simpleANSI$cursor$$$function__8_moveBegPrev,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7957a24238fbeaec3352fe2547a6ce49,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_simpleANSI$cursor,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simpleANSI$cursor$$$function__9_moveToCol() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simpleANSI$cursor$$$function__9_moveToCol,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2674c007d427b1f6aa9cb59553049d6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_simpleANSI$cursor,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_simpleANSI$cursor[] = {
    NULL,
    impl_simpleANSI$cursor$$$function__2_moveTo,
    impl_simpleANSI$cursor$$$function__3_moveUpBy,
    impl_simpleANSI$cursor$$$function__4_moveDownBy,
    impl_simpleANSI$cursor$$$function__5_moveRightBy,
    impl_simpleANSI$cursor$$$function__6_moveLeftBy,
    impl_simpleANSI$cursor$$$function__7_moveBegNext,
    impl_simpleANSI$cursor$$$function__8_moveBegPrev,
    impl_simpleANSI$cursor$$$function__9_moveToCol,
    NULL,
    NULL,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_simpleANSI$cursor;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_simpleANSI$cursor) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_simpleANSI$cursor[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_simpleANSI$cursor,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_simpleANSI$cursor(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("simpleANSI.cursor");

    // Store the module for future use.
    module_simpleANSI$cursor = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIternext();
#endif

        patchBuiltinModule();
        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("simpleANSI.cursor: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("simpleANSI.cursor: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("simpleANSI.cursor: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsimpleANSI$cursor\n");

    moduledict_simpleANSI$cursor = MODULE_DICT(module_simpleANSI$cursor);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_simpleANSI$cursor,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_simpleANSI$cursor,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[35]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_simpleANSI$cursor,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_simpleANSI$cursor,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_simpleANSI$cursor,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_simpleANSI$cursor);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_simpleANSI$cursor);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_c073e02684a464b7310c4919d33e77ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_c073e02684a464b7310c4919d33e77ba = MAKE_MODULE_FRAME(codeobj_c073e02684a464b7310c4919d33e77ba, module_simpleANSI$cursor);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c073e02684a464b7310c4919d33e77ba);
    assert(Py_REFCNT(frame_c073e02684a464b7310c4919d33e77ba) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[13], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c073e02684a464b7310c4919d33e77ba);
#endif
    popFrameStack();

    assertFrameObject(frame_c073e02684a464b7310c4919d33e77ba);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c073e02684a464b7310c4919d33e77ba);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c073e02684a464b7310c4919d33e77ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c073e02684a464b7310c4919d33e77ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c073e02684a464b7310c4919d33e77ba, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;


        tmp_assign_source_4 = MAKE_FUNCTION_simpleANSI$cursor$$$function__1_home();

        UPDATE_STRING_DICT1(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_simpleANSI$cursor$$$function__2_moveTo();

        UPDATE_STRING_DICT1(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_simpleANSI$cursor$$$function__3_moveUpBy();

        UPDATE_STRING_DICT1(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_simpleANSI$cursor$$$function__4_moveDownBy();

        UPDATE_STRING_DICT1(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_simpleANSI$cursor$$$function__5_moveRightBy();

        UPDATE_STRING_DICT1(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_simpleANSI$cursor$$$function__6_moveLeftBy();

        UPDATE_STRING_DICT1(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_simpleANSI$cursor$$$function__7_moveBegNext();

        UPDATE_STRING_DICT1(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_simpleANSI$cursor$$$function__8_moveBegPrev();

        UPDATE_STRING_DICT1(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_simpleANSI$cursor$$$function__9_moveToCol();

        UPDATE_STRING_DICT1(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_simpleANSI$cursor$$$function__10_savePos();

        UPDATE_STRING_DICT1(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_simpleANSI$cursor$$$function__11_restorePos();

        UPDATE_STRING_DICT1(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_14);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("simpleANSI.cursor", false);

    return module_simpleANSI$cursor;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_simpleANSI$cursor, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("simpleANSI$cursor", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
