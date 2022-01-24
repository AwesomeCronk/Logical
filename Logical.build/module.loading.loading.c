/* Generated code for Python module 'loading.loading'
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

/* The "module_loading$loading" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_loading$loading;
PyDictObject *moduledict_loading$loading;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[189];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[189];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("loading.loading"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 189; i++) {
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
void checkModuleConstants_loading$loading(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 189; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_526f2a6b1cf1e77ae275a18dc17986a6;
static PyCodeObject *codeobj_e78a24da08033d359186dcc7a6aa910e;
static PyCodeObject *codeobj_0515a546d8c05fbd0b9e988e4f588a7b;
static PyCodeObject *codeobj_7206336ef77a5241920b2ebfbf4156f8;
static PyCodeObject *codeobj_d20cf2d3d4108252333bcc3d8a543a93;
static PyCodeObject *codeobj_29092338fd96c63c181bdaa596cce77e;
static PyCodeObject *codeobj_d4836ab31c727e36f2d87d7e8ff6d949;
static PyCodeObject *codeobj_400c5854bcc6220dfbc6a35c6d77f8fc;
static PyCodeObject *codeobj_52109308f2ea5ec2e87629a5eb40a22c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[179]); CHECK_OBJECT(module_filename_obj);
    codeobj_526f2a6b1cf1e77ae275a18dc17986a6 = MAKE_CODEOBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[181], NULL, 1, 0, 0);
    codeobj_e78a24da08033d359186dcc7a6aa910e = MAKE_CODEOBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[182], NULL, 1, 0, 0);
    codeobj_0515a546d8c05fbd0b9e988e4f588a7b = MAKE_CODEOBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[183], NULL, 1, 0, 0);
    codeobj_7206336ef77a5241920b2ebfbf4156f8 = MAKE_CODEOBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[183], NULL, 1, 0, 0);
    codeobj_d20cf2d3d4108252333bcc3d8a543a93 = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[184], NULL, 1, 0, 0);
    codeobj_29092338fd96c63c181bdaa596cce77e = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[185], NULL, NULL, 0, 0, 0);
    codeobj_d4836ab31c727e36f2d87d7e8ff6d949 = MAKE_CODEOBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[139], mod_consts[186], NULL, 4, 0, 0);
    codeobj_400c5854bcc6220dfbc6a35c6d77f8fc = MAKE_CODEOBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], mod_consts[187], NULL, 3, 0, 0);
    codeobj_52109308f2ea5ec2e87629a5eb40a22c = MAKE_CODEOBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[188], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_loading$loading$$$function__1_loadTable(PyObject *defaults);


static PyObject *MAKE_FUNCTION_loading$loading$$$function__2_loadPyElement(PyObject *defaults);


static PyObject *MAKE_FUNCTION_loading$loading$$$function__3_loadElement(PyObject *defaults);


// The module function definitions.
static PyObject *impl_loading$loading$$$function__1_loadTable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filePath = python_pars[0];
    PyObject *par_id = python_pars[1];
    PyObject *var_log = NULL;
    PyObject *var_file = NULL;
    PyObject *var_commands = NULL;
    PyObject *var_table = NULL;
    PyObject *var_ctr = NULL;
    PyObject *var_comm = NULL;
    PyObject *var_i = NULL;
    PyObject *var_o = NULL;
    PyObject *var_match = NULL;
    PyObject *var_result = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_0_var_line = NULL;
    PyObject *outline_1_var_i = NULL;
    PyObject *outline_2_var_o = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_52109308f2ea5ec2e87629a5eb40a22c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_FrameObject *frame_0515a546d8c05fbd0b9e988e4f588a7b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_0515a546d8c05fbd0b9e988e4f588a7b_2 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    struct Nuitka_FrameObject *frame_e78a24da08033d359186dcc7a6aa910e_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    static struct Nuitka_FrameObject *cache_frame_e78a24da08033d359186dcc7a6aa910e_3 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    struct Nuitka_FrameObject *frame_d20cf2d3d4108252333bcc3d8a543a93_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    static struct Nuitka_FrameObject *cache_frame_d20cf2d3d4108252333bcc3d8a543a93_4 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_52109308f2ea5ec2e87629a5eb40a22c = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_52109308f2ea5ec2e87629a5eb40a22c)) {
        Py_XDECREF(cache_frame_52109308f2ea5ec2e87629a5eb40a22c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52109308f2ea5ec2e87629a5eb40a22c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52109308f2ea5ec2e87629a5eb40a22c = MAKE_FUNCTION_FRAME(codeobj_52109308f2ea5ec2e87629a5eb40a22c, module_loading$loading, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_52109308f2ea5ec2e87629a5eb40a22c->m_type_description == NULL);
    frame_52109308f2ea5ec2e87629a5eb40a22c = cache_frame_52109308f2ea5ec2e87629a5eb40a22c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_52109308f2ea5ec2e87629a5eb40a22c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_52109308f2ea5ec2e87629a5eb40a22c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 11;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[2], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_log == NULL);
        var_log = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_log);
        tmp_called_instance_2 = var_log;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 12;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[3],
            PyTuple_GET_ITEM(mod_consts[4], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_filePath);
        tmp_args_element_value_1 = par_filePath;
        tmp_args_element_value_2 = mod_consts[6];
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_2;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 13;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[8]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_6 = tmp_with_1__enter;
        assert(var_file == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_file = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_file);
        tmp_called_instance_3 = var_file;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 14;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[10]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_4;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 14;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[12]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_4;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 14;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_4;
        }
        assert(var_commands == NULL);
        var_commands = tmp_assign_source_7;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_52109308f2ea5ec2e87629a5eb40a22c, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_52109308f2ea5ec2e87629a5eb40a22c, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_8;
        tmp_assign_source_8 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        tmp_args_element_value_4 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_5 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_6 = EXC_TRACEBACK(PyThreadState_GET());
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 14;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 14;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame) frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooNoooooo";
    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 13;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame) frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooNoooooo";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 14;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[13]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 14;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 14;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[13]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 15;
        tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_table == NULL);
        var_table = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        if (var_commands == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 18;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = var_commands;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 18;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_7);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooNoooooo";
                exception_lineno = 18;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooNoooooo";
            exception_lineno = 18;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooNoooooo";
            exception_lineno = 18;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooNoooooo";
                    exception_lineno = 18;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[17];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooNoooooo";
            exception_lineno = 18;
            goto try_except_handler_8;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_ctr;
            var_ctr = tmp_assign_source_15;
            Py_INCREF(var_ctr);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_comm;
            var_comm = tmp_assign_source_16;
            Py_INCREF(var_comm);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_4;
        if (var_log == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 19;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_4 = var_log;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        tmp_left_value_1 = mod_consts[20];
        CHECK_OBJECT(var_comm);
        tmp_called_instance_4 = var_comm;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 19;
        tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[3]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 19;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[21]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 19;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 19;
        tmp_right_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_11, mod_consts[22]);

        Py_DECREF(tmp_called_value_11);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 19;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_8 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 19;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 19;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_6 = var_comm;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[23]);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_4 = mod_consts[24];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_7 = var_comm;
        tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[25]);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooNoooooo";
                exception_lineno = 21;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_19 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_19;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_10;
        if (var_table == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 22;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_8 = var_table;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[27]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_9;
        }
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 22;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_i);
        tmp_args_element_value_10 = var_i;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 22;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 22;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_9;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 22;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 21;
        type_description_1 = "ooooooNoooooo";
        goto try_except_handler_9;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_6;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_9 = var_comm;
        tmp_iter_arg_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[29]);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_21 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooNoooooo";
                exception_lineno = 23;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_22 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_o;
            var_o = tmp_assign_source_22;
            Py_INCREF(var_o);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_12;
        if (var_table == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 24;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_10;
        }

        tmp_expression_value_10 = var_table;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[30]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_10;
        }
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 24;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_o);
        tmp_args_element_value_12 = var_o;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 24;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_12);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 24;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_10;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 24;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_6);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 23;
        type_description_1 = "ooooooNoooooo";
        goto try_except_handler_10;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_6;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_11 = var_comm;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[23]);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_5 = mod_consts[31];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_6:;
    goto loop_end_1;
    branch_no_6:;
    branch_end_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 18;
        type_description_1 = "ooooooNoooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_7;
        if (var_table == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_table;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 29;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[32]);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        if (var_commands == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_commands;
        if (var_ctr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_1 = var_ctr;
        tmp_stop_value_1 = Py_None;
        tmp_subscript_value_1 = MAKE_SLICEOBJ2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_iter_arg_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = MAKE_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_23;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_24 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooNoooooo";
                exception_lineno = 31;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_25 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_comm;
            var_comm = tmp_assign_source_25;
            Py_INCREF(var_comm);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        if (var_log == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_13 = var_log;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[19]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_str_arg_value_1 = mod_consts[20];
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_called_instance_6;
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "ooooooNoooooo";
                goto try_except_handler_12;
            }
            CHECK_OBJECT(var_comm);
            tmp_called_instance_6 = var_comm;
            frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 32;
            tmp_expression_value_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[3]);
            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "ooooooNoooooo";
                goto try_except_handler_12;
            }
            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[21]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "ooooooNoooooo";
                goto try_except_handler_12;
            }
            frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 32;
            tmp_expression_value_14 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_19, mod_consts[22]);

            Py_DECREF(tmp_called_value_19);
            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "ooooooNoooooo";
                goto try_except_handler_12;
            }
            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[11]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "ooooooNoooooo";
                goto try_except_handler_12;
            }
            frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 32;
            tmp_args_element_value_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[12]);

            Py_DECREF(tmp_called_value_18);
            if (tmp_args_element_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "ooooooNoooooo";
                goto try_except_handler_12;
            }
            frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 32;
            tmp_iter_arg_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_iter_arg_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "ooooooNoooooo";
                goto try_except_handler_12;
            }
            tmp_assign_source_26 = MAKE_ITERATOR(tmp_iter_arg_6);
            Py_DECREF(tmp_iter_arg_6);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "ooooooNoooooo";
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_listcomp_1__$0;
                tmp_listcomp_1__$0 = tmp_assign_source_26;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = PyList_New(0);
            {
                PyObject *old = tmp_listcomp_1__contraction;
                tmp_listcomp_1__contraction = tmp_assign_source_27;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_0515a546d8c05fbd0b9e988e4f588a7b_2)) {
            Py_XDECREF(cache_frame_0515a546d8c05fbd0b9e988e4f588a7b_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0515a546d8c05fbd0b9e988e4f588a7b_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0515a546d8c05fbd0b9e988e4f588a7b_2 = MAKE_FUNCTION_FRAME(codeobj_0515a546d8c05fbd0b9e988e4f588a7b, module_loading$loading, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0515a546d8c05fbd0b9e988e4f588a7b_2->m_type_description == NULL);
        frame_0515a546d8c05fbd0b9e988e4f588a7b_2 = cache_frame_0515a546d8c05fbd0b9e988e4f588a7b_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0515a546d8c05fbd0b9e988e4f588a7b_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0515a546d8c05fbd0b9e988e4f588a7b_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_5 = tmp_listcomp_1__$0;
            tmp_assign_source_28 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_28 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 32;
                    goto try_except_handler_13;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_28;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_iter_arg_7;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_7 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_29 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_2 = "oo";
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_29;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_30 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
            if (tmp_assign_source_30 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 32;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_30;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_31 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
            if (tmp_assign_source_31 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 32;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_31;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 32;
                        goto try_except_handler_15;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[17];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 32;
                goto try_except_handler_15;
            }
        }
        goto try_end_10;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_14;
        // End of try:
        try_end_10:;
        goto try_end_11;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_13;
        // End of try:
        try_end_11:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_32;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_32 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_32;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_33 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_line;
                outline_0_var_line = tmp_assign_source_33;
                Py_INCREF(outline_0_var_line);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_left_value_2;
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_right_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_i);
            tmp_compexpr_left_6 = outline_0_var_i;
            tmp_compexpr_right_6 = mod_consts[34];
            tmp_condition_result_7 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_compexpr_left_6, tmp_compexpr_right_6);
            if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_2 = "oo";
                goto try_except_handler_13;
            }
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            assert(tmp_condition_result_7 != NUITKA_BOOL_UNASSIGNED);
            condexpr_true_1:;
            tmp_left_value_2 = mod_consts[35];
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_left_value_2 = mod_consts[36];
            condexpr_end_1:;
            CHECK_OBJECT(outline_0_var_line);
            tmp_right_value_2 = outline_0_var_line;
            tmp_append_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_value_2, tmp_right_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_2 = "oo";
                goto try_except_handler_13;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_2 = "oo";
                goto try_except_handler_13;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_2 = "oo";
            goto try_except_handler_13;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iterable_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_1);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0515a546d8c05fbd0b9e988e4f588a7b_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_0515a546d8c05fbd0b9e988e4f588a7b_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_12;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0515a546d8c05fbd0b9e988e4f588a7b_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0515a546d8c05fbd0b9e988e4f588a7b_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0515a546d8c05fbd0b9e988e4f588a7b_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0515a546d8c05fbd0b9e988e4f588a7b_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0515a546d8c05fbd0b9e988e4f588a7b_2,
            type_description_2,
            outline_0_var_i,
            outline_0_var_line
        );


        // Release cached frame if used for exception.
        if (frame_0515a546d8c05fbd0b9e988e4f588a7b_2 == cache_frame_0515a546d8c05fbd0b9e988e4f588a7b_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0515a546d8c05fbd0b9e988e4f588a7b_2);
            cache_frame_0515a546d8c05fbd0b9e988e4f588a7b_2 = NULL;
        }

        assertFrameObject(frame_0515a546d8c05fbd0b9e988e4f588a7b_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooNoooooo";
        goto try_except_handler_12;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_line);
        outline_0_var_line = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_line);
        outline_0_var_line = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 32;
        goto try_except_handler_11;
        outline_result_1:;
        tmp_args_element_value_13 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 32;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 32;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_16 = var_comm;
        tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[23]);
        if (tmp_compexpr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_compexpr_right_7 = mod_consts[24];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_7, tmp_compexpr_right_7);
        Py_DECREF(tmp_compexpr_left_7);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        assert(tmp_condition_result_8 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_17;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_args_element_value_16 = mod_consts[39];
        if (par_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_17 = par_id;
        if (par_filePath == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_18 = par_filePath;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_17 = var_comm;
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[42]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_args_element_value_15 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_args_element_value_19);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 34;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_18 = var_comm;
        tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[23]);
        if (tmp_compexpr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_compexpr_right_8 = mod_consts[31];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_left_8);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        assert(tmp_condition_result_9 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_8:;
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_19 = var_comm;
        tmp_iter_arg_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[25]);
        if (tmp_iter_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_34 = MAKE_ITERATOR(tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_6 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_35 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_35 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooNoooooo";
                exception_lineno = 38;
                goto try_except_handler_17;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_36 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_36;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_20;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(var_i);
        tmp_args_element_value_20 = var_i;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 39;
        tmp_compexpr_left_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_20);
        if (tmp_compexpr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_17;
        }
        tmp_compexpr_right_9 = LIST_COPY(mod_consts[44]);
        tmp_res = PySequence_Contains(tmp_compexpr_right_9, tmp_compexpr_left_9);
        Py_DECREF(tmp_compexpr_left_9);
        Py_DECREF(tmp_compexpr_right_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_17;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 39;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooNoooooo";
        goto try_except_handler_17;
    }
    branch_no_9:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 38;
        type_description_1 = "ooooooNoooooo";
        goto try_except_handler_17;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_16;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_20 = var_comm;
        tmp_iter_arg_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[25]);
        if (tmp_iter_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_37 = MAKE_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_for_loop_6__for_iterator;
            tmp_for_loop_6__for_iterator = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_7 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_38 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_38 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooNoooooo";
                exception_lineno = 40;
                goto try_except_handler_18;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_39 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_o;
            var_o = tmp_assign_source_39;
            Py_INCREF(var_o);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_18;
        }
        CHECK_OBJECT(var_o);
        tmp_args_element_value_21 = var_o;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 41;
        tmp_compexpr_left_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_21);
        if (tmp_compexpr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_18;
        }
        tmp_compexpr_right_10 = LIST_COPY(mod_consts[44]);
        tmp_res = PySequence_Contains(tmp_compexpr_right_10, tmp_compexpr_left_10);
        Py_DECREF(tmp_compexpr_left_10);
        Py_DECREF(tmp_compexpr_right_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_18;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 41;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooNoooooo";
        goto try_except_handler_18;
    }
    branch_no_10:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 40;
        type_description_1 = "ooooooNoooooo";
        goto try_except_handler_18;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_16;
    // End of try:
    try_end_13:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_16 == NULL) {
        exception_keeper_tb_16 = MAKE_TRACEBACK(frame_52109308f2ea5ec2e87629a5eb40a22c, exception_keeper_lineno_16);
    } else if (exception_keeper_lineno_16 != 0) {
        exception_keeper_tb_16 = ADD_TRACEBACK(exception_keeper_tb_16, frame_52109308f2ea5ec2e87629a5eb40a22c, exception_keeper_lineno_16);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_16, exception_keeper_tb_16);
    PUBLISH_EXCEPTION(&exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16);
    // Tried code:
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_expression_value_21;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_19;
        }
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_19;
        }
        tmp_args_element_value_23 = mod_consts[45];
        if (par_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_19;
        }

        tmp_args_element_value_24 = par_id;
        if (par_filePath == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_19;
        }

        tmp_args_element_value_25 = par_filePath;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_21 = var_comm;
        tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[42]);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_19;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_args_element_value_22 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_args_element_value_26);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_19;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 43;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_19;
        }
        Py_DECREF(tmp_call_result_10);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_11;
    // End of try:
    try_end_15:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_14;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_14:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_expression_value_23;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_22 = var_comm;
        tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[25]);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 45;
        tmp_compexpr_left_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_compexpr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_11);

            exception_lineno = 45;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        if (var_table == NULL) {
            Py_DECREF(tmp_compexpr_left_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_23 = var_table;
        tmp_args_element_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[25]);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_11);

            exception_lineno = 45;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 45;
        tmp_compexpr_right_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_compexpr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_11);

            exception_lineno = 45;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_11, tmp_compexpr_right_11);
        Py_DECREF(tmp_compexpr_left_11);
        Py_DECREF(tmp_compexpr_right_11);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
        assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_expression_value_24;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_args_element_value_30 = mod_consts[47];
        if (par_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_31 = par_id;
        if (par_filePath == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_32 = par_filePath;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_24 = var_comm;
        tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[42]);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_args_element_value_29 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_args_element_value_33);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 46;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_29);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_11);
    }
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_expression_value_26;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_25 = var_comm;
        tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[29]);
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 48;
        tmp_compexpr_left_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_34);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_compexpr_left_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_12);

            exception_lineno = 48;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        if (var_table == NULL) {
            Py_DECREF(tmp_compexpr_left_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 48;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_26 = var_table;
        tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[29]);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_12);

            exception_lineno = 48;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 48;
        tmp_compexpr_right_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_compexpr_right_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_12);

            exception_lineno = 48;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_12, tmp_compexpr_right_12);
        Py_DECREF(tmp_compexpr_left_12);
        Py_DECREF(tmp_compexpr_right_12);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
        assert(tmp_condition_result_13 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_expression_value_27;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_args_element_value_37 = mod_consts[48];
        if (par_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_38 = par_id;
        if (par_filePath == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_39 = par_filePath;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_27 = var_comm;
        tmp_args_element_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[42]);
        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_args_element_value_36 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_33, call_args);
        }

        Py_DECREF(tmp_args_element_value_40);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 49;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_36);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_12);
    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_iterable_value_2;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_left_value_3 = mod_consts[49];
        tmp_str_arg_value_2 = mod_consts[36];
        // Tried code:
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_iter_arg_10;
            PyObject *tmp_expression_value_28;
            CHECK_OBJECT(var_comm);
            tmp_expression_value_28 = var_comm;
            tmp_iter_arg_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[25]);
            if (tmp_iter_arg_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "ooooooNoooooo";
                goto try_except_handler_20;
            }
            tmp_assign_source_41 = MAKE_ITERATOR(tmp_iter_arg_10);
            Py_DECREF(tmp_iter_arg_10);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "ooooooNoooooo";
                goto try_except_handler_20;
            }
            {
                PyObject *old = tmp_listcomp_2__$0;
                tmp_listcomp_2__$0 = tmp_assign_source_41;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_42;
            tmp_assign_source_42 = PyList_New(0);
            {
                PyObject *old = tmp_listcomp_2__contraction;
                tmp_listcomp_2__contraction = tmp_assign_source_42;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_e78a24da08033d359186dcc7a6aa910e_3)) {
            Py_XDECREF(cache_frame_e78a24da08033d359186dcc7a6aa910e_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e78a24da08033d359186dcc7a6aa910e_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e78a24da08033d359186dcc7a6aa910e_3 = MAKE_FUNCTION_FRAME(codeobj_e78a24da08033d359186dcc7a6aa910e, module_loading$loading, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_e78a24da08033d359186dcc7a6aa910e_3->m_type_description == NULL);
        frame_e78a24da08033d359186dcc7a6aa910e_3 = cache_frame_e78a24da08033d359186dcc7a6aa910e_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_e78a24da08033d359186dcc7a6aa910e_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_e78a24da08033d359186dcc7a6aa910e_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_8:;
        {
            PyObject *tmp_next_source_8;
            PyObject *tmp_assign_source_43;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_8 = tmp_listcomp_2__$0;
            tmp_assign_source_43 = ITERATOR_NEXT(tmp_next_source_8);
            if (tmp_assign_source_43 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_8;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 52;
                    goto try_except_handler_21;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_43;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_44;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_44 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_i;
                outline_1_var_i = tmp_assign_source_44;
                Py_INCREF(outline_1_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_i);
            tmp_append_value_2 = outline_1_var_i;
            assert(PyList_Check(tmp_append_list_2));
            tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto try_except_handler_21;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_2 = "o";
            goto try_except_handler_21;
        }
        goto loop_start_8;
        loop_end_8:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_iterable_value_2 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_iterable_value_2);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e78a24da08033d359186dcc7a6aa910e_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_e78a24da08033d359186dcc7a6aa910e_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_20;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e78a24da08033d359186dcc7a6aa910e_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e78a24da08033d359186dcc7a6aa910e_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e78a24da08033d359186dcc7a6aa910e_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e78a24da08033d359186dcc7a6aa910e_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e78a24da08033d359186dcc7a6aa910e_3,
            type_description_2,
            outline_1_var_i
        );


        // Release cached frame if used for exception.
        if (frame_e78a24da08033d359186dcc7a6aa910e_3 == cache_frame_e78a24da08033d359186dcc7a6aa910e_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_e78a24da08033d359186dcc7a6aa910e_3);
            cache_frame_e78a24da08033d359186dcc7a6aa910e_3 = NULL;
        }

        assertFrameObject(frame_e78a24da08033d359186dcc7a6aa910e_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooNoooooo";
        goto try_except_handler_20;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_XDECREF(outline_1_var_i);
        outline_1_var_i = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_i);
        outline_1_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 52;
        goto try_except_handler_11;
        outline_result_2:;
        tmp_right_value_3 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_2);
        Py_DECREF(tmp_iterable_value_2);
        if (tmp_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        assert(!(tmp_tuple_element_1 == NULL));
        tmp_args_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[50]);
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 52;
        tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_34, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_match;
            var_match = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_str_arg_value_3;
        PyObject *tmp_iterable_value_3;
        tmp_str_arg_value_3 = mod_consts[36];
        // Tried code:
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_iter_arg_11;
            PyObject *tmp_expression_value_29;
            CHECK_OBJECT(var_comm);
            tmp_expression_value_29 = var_comm;
            tmp_iter_arg_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[29]);
            if (tmp_iter_arg_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "ooooooNoooooo";
                goto try_except_handler_22;
            }
            tmp_assign_source_46 = MAKE_ITERATOR(tmp_iter_arg_11);
            Py_DECREF(tmp_iter_arg_11);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "ooooooNoooooo";
                goto try_except_handler_22;
            }
            {
                PyObject *old = tmp_listcomp_3__$0;
                tmp_listcomp_3__$0 = tmp_assign_source_46;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_47;
            tmp_assign_source_47 = PyList_New(0);
            {
                PyObject *old = tmp_listcomp_3__contraction;
                tmp_listcomp_3__contraction = tmp_assign_source_47;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_d20cf2d3d4108252333bcc3d8a543a93_4)) {
            Py_XDECREF(cache_frame_d20cf2d3d4108252333bcc3d8a543a93_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d20cf2d3d4108252333bcc3d8a543a93_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d20cf2d3d4108252333bcc3d8a543a93_4 = MAKE_FUNCTION_FRAME(codeobj_d20cf2d3d4108252333bcc3d8a543a93, module_loading$loading, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d20cf2d3d4108252333bcc3d8a543a93_4->m_type_description == NULL);
        frame_d20cf2d3d4108252333bcc3d8a543a93_4 = cache_frame_d20cf2d3d4108252333bcc3d8a543a93_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d20cf2d3d4108252333bcc3d8a543a93_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d20cf2d3d4108252333bcc3d8a543a93_4) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_9:;
        {
            PyObject *tmp_next_source_9;
            PyObject *tmp_assign_source_48;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_9 = tmp_listcomp_3__$0;
            tmp_assign_source_48 = ITERATOR_NEXT(tmp_next_source_9);
            if (tmp_assign_source_48 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_9;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 53;
                    goto try_except_handler_23;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_48;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_49;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_49 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_o;
                outline_2_var_o = tmp_assign_source_49;
                Py_INCREF(outline_2_var_o);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            CHECK_OBJECT(outline_2_var_o);
            tmp_append_value_3 = outline_2_var_o;
            assert(PyList_Check(tmp_append_list_3));
            tmp_result = LIST_APPEND0(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_2 = "o";
            goto try_except_handler_23;
        }
        goto loop_start_9;
        loop_end_9:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_iterable_value_3 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_iterable_value_3);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto frame_return_exit_4;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto frame_exception_exit_4;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d20cf2d3d4108252333bcc3d8a543a93_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_return_exit_4:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_d20cf2d3d4108252333bcc3d8a543a93_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_22;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d20cf2d3d4108252333bcc3d8a543a93_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d20cf2d3d4108252333bcc3d8a543a93_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d20cf2d3d4108252333bcc3d8a543a93_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d20cf2d3d4108252333bcc3d8a543a93_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d20cf2d3d4108252333bcc3d8a543a93_4,
            type_description_2,
            outline_2_var_o
        );


        // Release cached frame if used for exception.
        if (frame_d20cf2d3d4108252333bcc3d8a543a93_4 == cache_frame_d20cf2d3d4108252333bcc3d8a543a93_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d20cf2d3d4108252333bcc3d8a543a93_4);
            cache_frame_d20cf2d3d4108252333bcc3d8a543a93_4 = NULL;
        }

        assertFrameObject(frame_d20cf2d3d4108252333bcc3d8a543a93_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "ooooooNoooooo";
        goto try_except_handler_22;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_XDECREF(outline_2_var_o);
        outline_2_var_o = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_2_var_o);
        outline_2_var_o = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 53;
        goto try_except_handler_11;
        outline_result_3:;
        tmp_assign_source_45 = UNICODE_JOIN(tmp_str_arg_value_3, tmp_iterable_value_3);
        Py_DECREF(tmp_iterable_value_3);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_result;
            var_result = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        if (var_log == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_30 = var_log;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[19]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_expression_value_31 = mod_consts[51];
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[52]);
        assert(!(tmp_called_value_36 == NULL));
        CHECK_OBJECT(var_match);
        tmp_args_element_value_42 = var_match;
        CHECK_OBJECT(var_result);
        tmp_args_element_value_43 = var_result;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43};
            tmp_args_element_value_41 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_36, call_args);
        }

        Py_DECREF(tmp_called_value_36);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 54;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 54;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_41);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        if (var_table == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }

        tmp_called_instance_7 = var_table;
        CHECK_OBJECT(var_match);
        tmp_args_element_value_44 = var_match;
        CHECK_OBJECT(var_result);
        tmp_args_element_value_45 = var_result;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_call_result_14 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_7,
                mod_consts[53],
                call_args
            );
        }

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_end_12:;
    branch_end_11:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_expression_value_34;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        tmp_expression_value_32 = mod_consts[54];
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[52]);
        assert(!(tmp_called_value_39 == NULL));
        CHECK_OBJECT(var_comm);
        tmp_expression_value_33 = var_comm;
        tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[55]);
        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 58;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 58;
        tmp_args_element_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        if (par_id == NULL) {
            Py_DECREF(tmp_args_element_value_47);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_49 = par_id;
        if (par_filePath == NULL) {
            Py_DECREF(tmp_args_element_value_47);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_50 = par_filePath;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_34 = var_comm;
        tmp_args_element_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[42]);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_47);

            exception_lineno = 58;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_args_element_value_46 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_args_element_value_47);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 58;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_46);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooNoooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_end_8:;
    branch_end_7:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 31;
        type_description_1 = "ooooooNoooooo";
        goto try_except_handler_11;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_52;
        if (var_table == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_35 = var_table;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[56]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        if (par_id == NULL) {
            Py_DECREF(tmp_called_value_40);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_52 = par_id;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 60;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_52);
        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_17;
        if (var_log == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = var_log;
        frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame.f_lineno = 62;
        tmp_call_result_17 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[3],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_tuple_element_2;
        if (var_table == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "ooooooNoooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_table;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_None;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52109308f2ea5ec2e87629a5eb40a22c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_52109308f2ea5ec2e87629a5eb40a22c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52109308f2ea5ec2e87629a5eb40a22c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_52109308f2ea5ec2e87629a5eb40a22c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52109308f2ea5ec2e87629a5eb40a22c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52109308f2ea5ec2e87629a5eb40a22c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52109308f2ea5ec2e87629a5eb40a22c,
        type_description_1,
        par_filePath,
        par_id,
        var_log,
        var_file,
        var_commands,
        var_table,
        NULL,
        var_ctr,
        var_comm,
        var_i,
        var_o,
        var_match,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_52109308f2ea5ec2e87629a5eb40a22c == cache_frame_52109308f2ea5ec2e87629a5eb40a22c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_52109308f2ea5ec2e87629a5eb40a22c);
        cache_frame_52109308f2ea5ec2e87629a5eb40a22c = NULL;
    }

    assertFrameObject(frame_52109308f2ea5ec2e87629a5eb40a22c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_4:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_log);
    var_log = NULL;
    CHECK_OBJECT(var_file);
    Py_DECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_commands);
    var_commands = NULL;
    Py_XDECREF(var_table);
    var_table = NULL;
    Py_XDECREF(var_ctr);
    var_ctr = NULL;
    Py_XDECREF(var_comm);
    var_comm = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_o);
    var_o = NULL;
    Py_XDECREF(var_match);
    var_match = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_log);
    var_log = NULL;
    Py_XDECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_commands);
    var_commands = NULL;
    Py_XDECREF(var_table);
    var_table = NULL;
    Py_XDECREF(var_ctr);
    var_ctr = NULL;
    Py_XDECREF(var_comm);
    var_comm = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_o);
    var_o = NULL;
    Py_XDECREF(var_match);
    var_match = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_filePath);
    Py_DECREF(par_filePath);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filePath);
    Py_DECREF(par_filePath);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_loading$loading$$$function__2_loadPyElement(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filePath = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_id = python_pars[2];
    PyObject *var_log = NULL;
    PyObject *var_globalVars = NULL;
    PyObject *var_localVars = NULL;
    PyObject *var_file = NULL;
    PyObject *var_pyElement = NULL;
    PyObject *var_pyWidget = NULL;
    PyObject *tmp_exec_call_1__globals = NULL;
    PyObject *tmp_exec_call_1__locals = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_400c5854bcc6220dfbc6a35c6d77f8fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *locals_loading$loading$$$function__2_loadPyElement = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_400c5854bcc6220dfbc6a35c6d77f8fc = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_400c5854bcc6220dfbc6a35c6d77f8fc)) {
        Py_XDECREF(cache_frame_400c5854bcc6220dfbc6a35c6d77f8fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_400c5854bcc6220dfbc6a35c6d77f8fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_400c5854bcc6220dfbc6a35c6d77f8fc = MAKE_FUNCTION_FRAME(codeobj_400c5854bcc6220dfbc6a35c6d77f8fc, module_loading$loading, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_type_description == NULL);
    frame_400c5854bcc6220dfbc6a35c6d77f8fc = cache_frame_400c5854bcc6220dfbc6a35c6d77f8fc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_400c5854bcc6220dfbc6a35c6d77f8fc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_400c5854bcc6220dfbc6a35c6d77f8fc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 67;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_log == NULL);
        var_log = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_log);
        tmp_called_instance_2 = var_log;
        frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 68;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[3],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[23];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[28];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[60];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[61];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_globalVars == NULL);
        var_globalVars = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert(var_localVars == NULL);
        var_localVars = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_filePath);
        tmp_args_element_value_1 = par_filePath;
        tmp_args_element_value_2 = mod_consts[6];
        frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 77;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_6 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[8]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_8 = tmp_with_1__enter;
        assert(var_file == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_file = tmp_assign_source_8;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_outline_return_value_1;
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(var_globalVars);
            tmp_assign_source_9 = var_globalVars;
            assert(tmp_exec_call_1__globals == NULL);
            Py_INCREF(tmp_assign_source_9);
            tmp_exec_call_1__globals = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(var_localVars);
            tmp_assign_source_10 = var_localVars;
            assert(tmp_exec_call_1__locals == NULL);
            Py_INCREF(tmp_assign_source_10);
            tmp_exec_call_1__locals = tmp_assign_source_10;
        }
        {
            bool tmp_condition_result_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_exec_call_1__locals);
            tmp_compexpr_left_1 = tmp_exec_call_1__locals;
            tmp_compexpr_right_1 = Py_None;
            tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
            if (tmp_condition_result_1 != false) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_11;
            bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_compexpr_left_2 = tmp_exec_call_1__globals;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            if (locals_loading$loading$$$function__2_loadPyElement == NULL) locals_loading$loading$$$function__2_loadPyElement = PyDict_New();
            tmp_assign_source_11 = locals_loading$loading$$$function__2_loadPyElement;
            Py_INCREF(tmp_assign_source_11);
            if (par_filePath != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_filePath);
                value = par_filePath;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_11, (Nuitka_StringObject *)mod_consts[41], value);
            } else {
                int res = PyDict_DelItem(tmp_assign_source_11, mod_consts[41]);

                if (res != 0) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (par_args != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_args);
                value = par_args;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_11, (Nuitka_StringObject *)mod_consts[62], value);
            } else {
                int res = PyDict_DelItem(tmp_assign_source_11, mod_consts[62]);

                if (res != 0) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (par_id != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_id);
                value = par_id;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_11, (Nuitka_StringObject *)mod_consts[40], value);
            } else {
                int res = PyDict_DelItem(tmp_assign_source_11, mod_consts[40]);

                if (res != 0) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (var_log != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_log);
                value = var_log;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_11, (Nuitka_StringObject *)mod_consts[18], value);
            } else {
                int res = PyDict_DelItem(tmp_assign_source_11, mod_consts[18]);

                if (res != 0) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (var_globalVars != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_globalVars);
                value = var_globalVars;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_11, (Nuitka_StringObject *)mod_consts[63], value);
            } else {
                int res = PyDict_DelItem(tmp_assign_source_11, mod_consts[63]);

                if (res != 0) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (var_localVars != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_localVars);
                value = var_localVars;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_11, (Nuitka_StringObject *)mod_consts[64], value);
            } else {
                int res = PyDict_DelItem(tmp_assign_source_11, mod_consts[64]);

                if (res != 0) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (var_file != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_file);
                value = var_file;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_11, (Nuitka_StringObject *)mod_consts[65], value);
            } else {
                int res = PyDict_DelItem(tmp_assign_source_11, mod_consts[65]);

                if (res != 0) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_assign_source_11 = tmp_exec_call_1__globals;
            Py_INCREF(tmp_assign_source_11);
            condexpr_end_1:;
            {
                PyObject *old = tmp_exec_call_1__locals;
                assert(old != NULL);
                tmp_exec_call_1__locals = tmp_assign_source_11;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
        {
            bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_compexpr_left_3 = tmp_exec_call_1__globals;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_3 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
            if (tmp_condition_result_3 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = (PyObject *)moduledict_loading$loading;
            {
                PyObject *old = tmp_exec_call_1__globals;
                assert(old != NULL);
                tmp_exec_call_1__globals = tmp_assign_source_12;
                Py_INCREF(tmp_exec_call_1__globals);
                Py_DECREF(old);
            }

        }
        branch_no_2:;
        // Tried code:
        {
            PyObject *tmp_eval_source_1;
            PyObject *tmp_eval_globals_1;
            PyObject *tmp_eval_locals_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_eval_compiled_1;
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT(var_file);
            tmp_called_instance_3 = var_file;
            frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 78;
            tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[10]);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT(par_filePath);
            tmp_args_element_value_4 = par_filePath;
            tmp_args_element_value_5 = mod_consts[67];
            frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 78;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
                tmp_eval_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
            }

            Py_DECREF(tmp_args_element_value_3);
            if (tmp_eval_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_eval_globals_1 = tmp_exec_call_1__globals;
            CHECK_OBJECT(tmp_exec_call_1__locals);
            tmp_eval_locals_1 = tmp_exec_call_1__locals;
            tmp_eval_compiled_1 = COMPILE_CODE(tmp_eval_source_1, mod_consts[68], mod_consts[67], NULL, NULL, NULL);
            Py_DECREF(tmp_eval_source_1);
            if (tmp_eval_compiled_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            tmp_outline_return_value_1 = EVAL_CODE(tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1);
            Py_DECREF(tmp_eval_compiled_1);
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            goto try_return_handler_5;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_exec_call_1__globals);
        Py_DECREF(tmp_exec_call_1__globals);
        tmp_exec_call_1__globals = NULL;
        CHECK_OBJECT(tmp_exec_call_1__locals);
        Py_DECREF(tmp_exec_call_1__locals);
        tmp_exec_call_1__locals = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_exec_call_1__globals);
        Py_DECREF(tmp_exec_call_1__globals);
        tmp_exec_call_1__globals = NULL;
        CHECK_OBJECT(tmp_exec_call_1__locals);
        Py_DECREF(tmp_exec_call_1__locals);
        tmp_exec_call_1__locals = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        Py_DECREF(tmp_outline_return_value_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_400c5854bcc6220dfbc6a35c6d77f8fc, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_400c5854bcc6220dfbc6a35c6d77f8fc, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_2, exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_assign_source_13;
        tmp_assign_source_13 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        tmp_args_element_value_6 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_7 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_8 = EXC_TRACEBACK(PyThreadState_GET());
        frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 78;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame) frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_6;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 77;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame) frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_6;
    branch_end_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_5;
        nuitka_bool tmp_compexpr_right_5;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_5 = tmp_with_1__indicator;
        tmp_compexpr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 78;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[13]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_4);
            Py_XDECREF(exception_keeper_value_4);
            Py_XDECREF(exception_keeper_tb_4);

            exception_lineno = 78;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_compexpr_left_6;
        nuitka_bool tmp_compexpr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_6 = tmp_with_1__indicator;
        tmp_compexpr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 78;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[13]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_6:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_3;
        tmp_compexpr_left_7 = mod_consts[69];
        CHECK_OBJECT(var_localVars);
        tmp_expression_value_3 = var_localVars;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[70]);
        assert(!(tmp_called_value_7 == NULL));
        frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 80;
        tmp_compexpr_right_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_compexpr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_7, tmp_compexpr_left_7);
        Py_DECREF(tmp_compexpr_right_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_localVars);
        tmp_expression_value_4 = var_localVars;
        tmp_subscript_value_1 = mod_consts[69];
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pyElement == NULL);
        var_pyElement = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(var_pyElement);
        tmp_dircall_arg1_1 = var_pyElement;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_15 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pyElement;
            assert(old != NULL);
            var_pyElement = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_pyElement);
        tmp_expression_value_5 = var_pyElement;
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[60]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        assert(var_pyWidget == NULL);
        var_pyWidget = tmp_assign_source_16;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_400c5854bcc6220dfbc6a35c6d77f8fc, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_400c5854bcc6220dfbc6a35c6d77f8fc, exception_keeper_lineno_6);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_6, exception_keeper_tb_6);
    PUBLISH_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        tmp_compexpr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_8 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_compexpr_right_8 == NULL)) {
            tmp_compexpr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_compexpr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_8, tmp_compexpr_right_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = Py_None;
        assert(var_pyWidget == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_pyWidget = tmp_assign_source_17;
    }
    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 83;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame) frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_8;
    branch_end_8:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[72];
        CHECK_OBJECT(par_id);
        tmp_args_element_value_11 = par_id;
        CHECK_OBJECT(par_filePath);
        tmp_args_element_value_12 = par_filePath;
        frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_args_element_value_9 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 88;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_7:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_13;
        if (var_pyElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = var_pyElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_13 = par_id;
        frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 90;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[56], tmp_args_element_value_13);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_log);
        tmp_called_instance_5 = var_log;
        frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame.f_lineno = 91;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[3],
            PyTuple_GET_ITEM(mod_consts[73], 0)
        );

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_tuple_element_1;
        if (var_pyElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_pyElement;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_pyWidget == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_pyWidget;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_400c5854bcc6220dfbc6a35c6d77f8fc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_400c5854bcc6220dfbc6a35c6d77f8fc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_400c5854bcc6220dfbc6a35c6d77f8fc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_400c5854bcc6220dfbc6a35c6d77f8fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_400c5854bcc6220dfbc6a35c6d77f8fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_400c5854bcc6220dfbc6a35c6d77f8fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_400c5854bcc6220dfbc6a35c6d77f8fc,
        type_description_1,
        par_filePath,
        par_args,
        par_id,
        var_log,
        var_globalVars,
        var_localVars,
        var_file,
        var_pyElement,
        var_pyWidget
    );


    // Release cached frame if used for exception.
    if (frame_400c5854bcc6220dfbc6a35c6d77f8fc == cache_frame_400c5854bcc6220dfbc6a35c6d77f8fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_400c5854bcc6220dfbc6a35c6d77f8fc);
        cache_frame_400c5854bcc6220dfbc6a35c6d77f8fc = NULL;
    }

    assertFrameObject(frame_400c5854bcc6220dfbc6a35c6d77f8fc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_log);
    Py_DECREF(var_log);
    var_log = NULL;
    CHECK_OBJECT(var_globalVars);
    Py_DECREF(var_globalVars);
    var_globalVars = NULL;
    CHECK_OBJECT(var_localVars);
    Py_DECREF(var_localVars);
    var_localVars = NULL;
    CHECK_OBJECT(var_file);
    Py_DECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_pyElement);
    var_pyElement = NULL;
    Py_XDECREF(var_pyWidget);
    var_pyWidget = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_log);
    var_log = NULL;
    Py_XDECREF(var_globalVars);
    var_globalVars = NULL;
    Py_XDECREF(var_localVars);
    var_localVars = NULL;
    Py_XDECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_pyElement);
    var_pyElement = NULL;
    Py_XDECREF(var_pyWidget);
    var_pyWidget = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    Py_XDECREF(locals_loading$loading$$$function__2_loadPyElement);

    CHECK_OBJECT(par_filePath);
    Py_DECREF(par_filePath);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_loading$loading$$$function__2_loadPyElement);

    CHECK_OBJECT(par_filePath);
    Py_DECREF(par_filePath);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_loading$loading$$$function__3_loadElement(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filePath = python_pars[0];
    PyObject *par_cwd = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_id = python_pars[3];
    PyObject *var_log = NULL;
    PyObject *var_file = NULL;
    PyObject *var_commands = NULL;
    PyObject *var_needsConnected = NULL;
    PyObject *var_registeredElements = NULL;
    PyObject *var_mainElement = NULL;
    PyObject *var_highPin = NULL;
    PyObject *var_lowPin = NULL;
    PyObject *var_mainWidget = NULL;
    PyObject *var_comm = NULL;
    PyObject *var_performIOChecks = NULL;
    PyObject *var_i = NULL;
    PyObject *var_o = NULL;
    PyObject *var_newPin = NULL;
    PyObject *var_newElement = NULL;
    PyObject *var_newWidget = NULL;
    PyObject *var_names = NULL;
    PyObject *var_n = NULL;
    PyObject *var_name = NULL;
    PyObject *var_pins = NULL;
    PyObject *var_e = NULL;
    PyObject *var_targetName = NULL;
    PyObject *var_targetPins = NULL;
    PyObject *var_targetPin = NULL;
    PyObject *var_targetNames = NULL;
    PyObject *var_inputPin = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_0_var_line = NULL;
    PyObject *outline_1_var_e = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_for_loop_8__for_iterator = NULL;
    PyObject *tmp_for_loop_8__iter_value = NULL;
    PyObject *tmp_for_loop_9__for_iterator = NULL;
    PyObject *tmp_for_loop_9__iter_value = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_d4836ab31c727e36f2d87d7e8ff6d949;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_7206336ef77a5241920b2ebfbf4156f8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_7206336ef77a5241920b2ebfbf4156f8_2 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    struct Nuitka_FrameObject *frame_526f2a6b1cf1e77ae275a18dc17986a6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    static struct Nuitka_FrameObject *cache_frame_526f2a6b1cf1e77ae275a18dc17986a6_3 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    static struct Nuitka_FrameObject *cache_frame_d4836ab31c727e36f2d87d7e8ff6d949 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d4836ab31c727e36f2d87d7e8ff6d949)) {
        Py_XDECREF(cache_frame_d4836ab31c727e36f2d87d7e8ff6d949);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d4836ab31c727e36f2d87d7e8ff6d949 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d4836ab31c727e36f2d87d7e8ff6d949 = MAKE_FUNCTION_FRAME(codeobj_d4836ab31c727e36f2d87d7e8ff6d949, module_loading$loading, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d4836ab31c727e36f2d87d7e8ff6d949->m_type_description == NULL);
    frame_d4836ab31c727e36f2d87d7e8ff6d949 = cache_frame_d4836ab31c727e36f2d87d7e8ff6d949;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d4836ab31c727e36f2d87d7e8ff6d949);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d4836ab31c727e36f2d87d7e8ff6d949) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 96;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[75], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_log == NULL);
        var_log = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_log);
        tmp_called_instance_2 = var_log;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 97;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[3],
            PyTuple_GET_ITEM(mod_consts[76], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_log);
        tmp_expression_value_1 = var_log;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = mod_consts[77];
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[52]);
        assert(!(tmp_called_value_2 == NULL));
        CHECK_OBJECT(par_filePath);
        tmp_args_element_value_2 = par_filePath;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 98;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 98;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 98;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_log);
        tmp_expression_value_3 = var_log;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = mod_consts[78];
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[52]);
        assert(!(tmp_called_value_4 == NULL));
        CHECK_OBJECT(par_cwd);
        tmp_args_element_value_4 = par_cwd;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 99;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 99;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 99;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_cwd);
        tmp_compexpr_left_1 = par_cwd;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[80]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filePath);
        tmp_args_element_value_5 = par_filePath;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 103;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[81], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_filePath;
            assert(old != NULL);
            par_filePath = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[80]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[82]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cwd);
        tmp_args_element_value_6 = par_cwd;
        CHECK_OBJECT(par_filePath);
        tmp_args_element_value_7 = par_filePath;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_filePath;
            assert(old != NULL);
            par_filePath = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[80]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[11]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filePath);
        tmp_args_element_value_8 = par_filePath;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 106;
        tmp_expression_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_6);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[34];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_cwd;
            assert(old != NULL);
            par_cwd = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_log);
        tmp_expression_value_11 = var_log;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[19]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = mod_consts[83];
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[52]);
        assert(!(tmp_called_value_8 == NULL));
        CHECK_OBJECT(par_filePath);
        tmp_args_element_value_10 = par_filePath;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 107;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_8);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 107;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 107;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(var_log);
        tmp_expression_value_13 = var_log;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[19]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = mod_consts[84];
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[52]);
        assert(!(tmp_called_value_10 == NULL));
        CHECK_OBJECT(par_cwd);
        tmp_args_element_value_12 = par_cwd;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 108;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_10);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 108;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 108;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_filePath);
        tmp_expression_value_16 = par_filePath;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[11]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 110;
        tmp_expression_value_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[85]);

        Py_DECREF(tmp_called_value_11);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[86];
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_2, -1);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[87];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filePath);
        tmp_kw_call_arg_value_0_1 = par_filePath;
        CHECK_OBJECT(par_id);
        tmp_kw_call_dict_value_0_1 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 111;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_12, args, kw_values, mod_consts[89]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_filePath);
        tmp_expression_value_18 = par_filePath;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[11]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 112;
        tmp_expression_value_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[85]);

        Py_DECREF(tmp_called_value_13);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[86];
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_3, -1);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = mod_consts[90];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filePath);
        tmp_kw_call_arg_value_0_2 = par_filePath;
        CHECK_OBJECT(par_args);
        tmp_kw_call_dict_value_0_2 = par_args;
        CHECK_OBJECT(par_id);
        tmp_kw_call_dict_value_1_1 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 113;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_14, args, kw_values, mod_consts[92]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_3:;
    branch_end_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_filePath);
        tmp_args_element_value_13 = par_filePath;
        tmp_args_element_value_14 = mod_consts[6];
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_19 = tmp_with_1__source;
        tmp_called_value_16 = LOOKUP_SPECIAL(tmp_expression_value_19, mod_consts[7]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 115;
        tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
        Py_DECREF(tmp_called_value_16);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_20 = tmp_with_1__source;
        tmp_assign_source_7 = LOOKUP_SPECIAL(tmp_expression_value_20, mod_consts[8]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_assign_source_8;
        tmp_assign_source_8 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_9 = tmp_with_1__enter;
        assert(var_file == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_file = tmp_assign_source_9;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_called_instance_4;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_file);
        tmp_called_instance_4 = var_file;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 116;
        tmp_expression_value_21 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[10]);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[11]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 116;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[12]);

        Py_DECREF(tmp_called_value_18);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 116;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_commands == NULL);
        var_commands = tmp_assign_source_10;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d4836ab31c727e36f2d87d7e8ff6d949, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d4836ab31c727e36f2d87d7e8ff6d949, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_19 = tmp_with_1__exit;
        tmp_args_element_value_16 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_17 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_18 = EXC_TRACEBACK(PyThreadState_GET());
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_19, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 116;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame) frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooNooooooooooooooooooooo";
    goto try_except_handler_5;
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 115;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame) frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooNooooooooooooooooooooo";
    goto try_except_handler_5;
    branch_end_4:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_5;
        nuitka_bool tmp_compexpr_right_5;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_5 = tmp_with_1__indicator;
        tmp_compexpr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_20 = tmp_with_1__exit;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 116;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_20, mod_consts[13]);

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 116;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_6:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_compexpr_left_6;
        nuitka_bool tmp_compexpr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_6 = tmp_with_1__indicator;
        tmp_compexpr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_21 = tmp_with_1__exit;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 116;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_21, mod_consts[13]);

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_7:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert(var_needsConnected == NULL);
        var_needsConnected = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyDict_New();
        assert(var_registeredElements == NULL);
        var_registeredElements = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_22;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 124;
        tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_22);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mainElement == NULL);
        var_mainElement = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_19;
        CHECK_OBJECT(var_mainElement);
        tmp_called_instance_5 = var_mainElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_19 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 125;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[56], tmp_args_element_value_19);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_23;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 127;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_23, mod_consts[93]);

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_highPin == NULL);
        var_highPin = tmp_assign_source_15;
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_mainElement);
        tmp_expression_value_23 = var_mainElement;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[94]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[95]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_highPin);
        tmp_expression_value_24 = var_highPin;
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[96]);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 128;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_highPin);
        tmp_list_element_1 = var_highPin;
        tmp_dict_value_1 = PyList_New(1);
        PyList_SET_ITEM0(tmp_dict_value_1, 0, tmp_list_element_1);
        tmp_args_element_value_20 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_20, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        Py_DECREF(tmp_dict_key_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_1;
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_20);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 128;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT(var_mainElement);
        tmp_expression_value_26 = var_mainElement;
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[97]);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[95]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_highPin);
        tmp_expression_value_27 = var_highPin;
        tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[98]);
        if (tmp_dict_key_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 129;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_highPin);
        tmp_list_element_2 = var_highPin;
        tmp_dict_value_2 = PyList_New(1);
        PyList_SET_ITEM0(tmp_dict_value_2, 0, tmp_list_element_2);
        tmp_args_element_value_21 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_21, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        Py_DECREF(tmp_dict_key_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_2;
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_21);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 129;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(var_mainElement);
        tmp_expression_value_30 = var_mainElement;
        tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[94]);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[99];
        tmp_expression_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[34];
        tmp_called_instance_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_28, tmp_subscript_value_5, 0);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 130;
        tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[100],
            PyTuple_GET_ITEM(mod_consts[101], 0)
        );

        Py_DECREF(tmp_called_instance_6);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_26;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 132;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_26, mod_consts[102]);

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lowPin == NULL);
        var_lowPin = tmp_assign_source_16;
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_list_element_3;
        CHECK_OBJECT(var_mainElement);
        tmp_expression_value_32 = var_mainElement;
        tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[94]);
        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[95]);
        Py_DECREF(tmp_expression_value_31);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lowPin);
        tmp_expression_value_33 = var_lowPin;
        tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[96]);
        if (tmp_dict_key_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 133;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lowPin);
        tmp_list_element_3 = var_lowPin;
        tmp_dict_value_3 = PyList_New(1);
        PyList_SET_ITEM0(tmp_dict_value_3, 0, tmp_list_element_3);
        tmp_args_element_value_22 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_22, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        Py_DECREF(tmp_dict_key_3);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_3;
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_22);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 133;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_list_element_4;
        CHECK_OBJECT(var_mainElement);
        tmp_expression_value_35 = var_mainElement;
        tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[97]);
        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[95]);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lowPin);
        tmp_expression_value_36 = var_lowPin;
        tmp_dict_key_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[98]);
        if (tmp_dict_key_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 134;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lowPin);
        tmp_list_element_4 = var_lowPin;
        tmp_dict_value_4 = PyList_New(1);
        PyList_SET_ITEM0(tmp_dict_value_4, 0, tmp_list_element_4);
        tmp_args_element_value_23 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_23, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        Py_DECREF(tmp_dict_key_4);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_4;
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_23);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 134;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(var_mainElement);
        tmp_expression_value_39 = var_mainElement;
        tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[94]);
        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[103];
        tmp_expression_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = mod_consts[34];
        tmp_called_instance_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_37, tmp_subscript_value_7, 0);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 135;
        tmp_call_result_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[100],
            PyTuple_GET_ITEM(mod_consts[104], 0)
        );

        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_29;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 138;
        tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_29);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mainWidget == NULL);
        var_mainWidget = tmp_assign_source_17;
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(var_mainWidget);
        tmp_expression_value_40 = var_mainWidget;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[105]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 139;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[106]);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 139;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 139;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_1;
        if (var_commands == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = var_commands;
        tmp_assign_source_18 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_18;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_19 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                exception_lineno = 141;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_20 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_comm;
            var_comm = tmp_assign_source_20;
            Py_INCREF(var_comm);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        if (par_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_left_value_1 = par_id;
        tmp_right_value_1 = mod_consts[107];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_value_1, tmp_right_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_21 = tmp_left_value_1;
        par_id = tmp_assign_source_21;

    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = Py_True;
        {
            PyObject *old = var_performIOChecks;
            var_performIOChecks = tmp_assign_source_22;
            Py_INCREF(var_performIOChecks);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        if (var_log == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_42 = var_log;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[19]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_str_arg_value_1 = mod_consts[20];
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_called_value_33;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_called_value_34;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_called_instance_8;
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            CHECK_OBJECT(var_comm);
            tmp_called_instance_8 = var_comm;
            frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 144;
            tmp_expression_value_44 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[3]);
            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[21]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 144;
            tmp_expression_value_43 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_34, mod_consts[22]);

            Py_DECREF(tmp_called_value_34);
            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[11]);
            Py_DECREF(tmp_expression_value_43);
            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 144;
            tmp_args_element_value_26 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_33, mod_consts[12]);

            Py_DECREF(tmp_called_value_33);
            if (tmp_args_element_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 144;
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_assign_source_23 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp_1__$0;
                tmp_listcomp_1__$0 = tmp_assign_source_23;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = PyList_New(0);
            {
                PyObject *old = tmp_listcomp_1__contraction;
                tmp_listcomp_1__contraction = tmp_assign_source_24;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_7206336ef77a5241920b2ebfbf4156f8_2)) {
            Py_XDECREF(cache_frame_7206336ef77a5241920b2ebfbf4156f8_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7206336ef77a5241920b2ebfbf4156f8_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7206336ef77a5241920b2ebfbf4156f8_2 = MAKE_FUNCTION_FRAME(codeobj_7206336ef77a5241920b2ebfbf4156f8, module_loading$loading, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_7206336ef77a5241920b2ebfbf4156f8_2->m_type_description == NULL);
        frame_7206336ef77a5241920b2ebfbf4156f8_2 = cache_frame_7206336ef77a5241920b2ebfbf4156f8_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_7206336ef77a5241920b2ebfbf4156f8_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_7206336ef77a5241920b2ebfbf4156f8_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_25 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 144;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_25;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_3 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_26 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_26;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_27 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_27 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 144;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_27;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_28 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_28 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 144;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_28;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 144;
                        goto try_except_handler_10;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[17];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 144;
                goto try_except_handler_10;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_9;
        // End of try:
        try_end_5:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_8;
        // End of try:
        try_end_6:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_29;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_29 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_29;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_30 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_line;
                outline_0_var_line = tmp_assign_source_30;
                Py_INCREF(outline_0_var_line);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_left_value_2;
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_right_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_i);
            tmp_compexpr_left_7 = outline_0_var_i;
            tmp_compexpr_right_7 = mod_consts[34];
            tmp_condition_result_8 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_compexpr_left_7, tmp_compexpr_right_7);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            assert(tmp_condition_result_8 != NUITKA_BOOL_UNASSIGNED);
            condexpr_true_1:;
            tmp_left_value_2 = mod_consts[35];
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_left_value_2 = mod_consts[36];
            condexpr_end_1:;
            CHECK_OBJECT(outline_0_var_line);
            tmp_right_value_2 = outline_0_var_line;
            tmp_append_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_value_2, tmp_right_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_2 = "oo";
            goto try_except_handler_8;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iterable_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_1);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7206336ef77a5241920b2ebfbf4156f8_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_7206336ef77a5241920b2ebfbf4156f8_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_7;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7206336ef77a5241920b2ebfbf4156f8_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7206336ef77a5241920b2ebfbf4156f8_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7206336ef77a5241920b2ebfbf4156f8_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7206336ef77a5241920b2ebfbf4156f8_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7206336ef77a5241920b2ebfbf4156f8_2,
            type_description_2,
            outline_0_var_i,
            outline_0_var_line
        );


        // Release cached frame if used for exception.
        if (frame_7206336ef77a5241920b2ebfbf4156f8_2 == cache_frame_7206336ef77a5241920b2ebfbf4156f8_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_7206336ef77a5241920b2ebfbf4156f8_2);
            cache_frame_7206336ef77a5241920b2ebfbf4156f8_2 = NULL;
        }

        assertFrameObject(frame_7206336ef77a5241920b2ebfbf4156f8_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooNooooooooooooooooooooo";
        goto try_except_handler_7;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_line);
        outline_0_var_line = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_line);
        outline_0_var_line = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 144;
        goto try_except_handler_6;
        outline_result_1:;
        tmp_args_element_value_25 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 144;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 144;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_45 = var_comm;
        tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[23]);
        if (tmp_compexpr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_8 = mod_consts[108];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_left_8);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        assert(tmp_condition_result_9 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_9;
        if (var_registeredElements == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 148;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_46 = var_registeredElements;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[95]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_48 = var_comm;
        tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[29]);
        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 148;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_8 = mod_consts[34];
        tmp_dict_key_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_47, tmp_subscript_value_8, 0);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_dict_key_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 148;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_51 = var_comm;
        tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[25]);
        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_dict_key_5);

            exception_lineno = 148;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_9 = mod_consts[34];
        tmp_expression_value_49 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_50, tmp_subscript_value_9, 0);
        Py_DECREF(tmp_expression_value_50);
        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_dict_key_5);

            exception_lineno = 148;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[21]);
        Py_DECREF(tmp_expression_value_49);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_dict_key_5);

            exception_lineno = 148;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 148;
        tmp_dict_value_5 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_36, mod_consts[110]);

        Py_DECREF(tmp_called_value_36);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_dict_key_5);

            exception_lineno = 148;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_27 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_27, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        Py_DECREF(tmp_dict_key_5);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_5;
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_element_value_27);
        goto try_except_handler_6;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 148;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = Py_False;
        {
            PyObject *old = var_performIOChecks;
            assert(old != NULL);
            var_performIOChecks = tmp_assign_source_31;
            Py_INCREF(var_performIOChecks);
            Py_DECREF(old);
        }

    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_52 = var_comm;
        tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[23]);
        if (tmp_compexpr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_9 = mod_consts[24];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_9, tmp_compexpr_right_9);
        Py_DECREF(tmp_compexpr_left_9);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        assert(tmp_condition_result_10 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_expression_value_53;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_53 = var_comm;
        tmp_iter_arg_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[25]);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_32 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_33 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_33 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                exception_lineno = 152;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_34 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_34;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_29;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_54 = var_mainElement;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[27]);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 153;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT(var_i);
        tmp_args_element_value_29 = var_i;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 153;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_29);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 153;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 153;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_18);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 152;
        type_description_1 = "oooooooooNooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_6;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_expression_value_55;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_55 = var_comm;
        tmp_iter_arg_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[29]);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_35 = MAKE_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_4 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_36 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_36 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                exception_lineno = 154;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_37 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_o;
            var_o = tmp_assign_source_37;
            Py_INCREF(var_o);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_30;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_o);
        tmp_args_element_value_30 = var_o;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 155;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_30);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_newPin;
            var_newPin = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_56 = var_needsConnected;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[95]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_newPin);
        tmp_dict_key_6 = var_newPin;
        CHECK_OBJECT(var_o);
        tmp_dict_value_6 = var_o;
        tmp_args_element_value_31 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_31, tmp_dict_key_6, tmp_dict_value_6);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_6;
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_31);
        goto try_except_handler_12;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 156;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_32;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_instance_9 = var_mainElement;
        CHECK_OBJECT(var_newPin);
        tmp_args_element_value_32 = var_newPin;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 157;
        tmp_call_result_20 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[30], tmp_args_element_value_32);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_20);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 154;
        type_description_1 = "oooooooooNooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_6;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = Py_False;
        {
            PyObject *old = var_performIOChecks;
            assert(old != NULL);
            var_performIOChecks = tmp_assign_source_39;
            Py_INCREF(var_performIOChecks);
            Py_DECREF(old);
        }

    }
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_expression_value_57;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_57 = var_comm;
        tmp_compexpr_left_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[23]);
        if (tmp_compexpr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_10 = mod_consts[113];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_10, tmp_compexpr_right_10);
        Py_DECREF(tmp_compexpr_left_10);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        assert(tmp_condition_result_11 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_41;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 162;
        tmp_assign_source_40 = CALL_FUNCTION_NO_ARGS(tmp_called_value_41);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_newElement;
            var_newElement = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_60 = var_newElement;
        tmp_expression_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[29]);
        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_10 = mod_consts[115];
        tmp_expression_value_58 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_10);
        Py_DECREF(tmp_expression_value_59);
        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[116]);
        Py_DECREF(tmp_expression_value_58);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_62 = var_comm;
        tmp_expression_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[29]);
        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 163;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_11 = mod_consts[34];
        tmp_args_element_value_33 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_61, tmp_subscript_value_11, 0);
        Py_DECREF(tmp_expression_value_61);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 163;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 163;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_34;
        CHECK_OBJECT(var_newElement);
        tmp_called_instance_10 = var_newElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_34 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 164;
        tmp_call_result_22 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[56], tmp_args_element_value_34);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_35;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_11 = var_mainElement;
        CHECK_OBJECT(var_newElement);
        tmp_args_element_value_35 = var_newElement;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 165;
        tmp_call_result_23 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[117], tmp_args_element_value_35);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_64;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_63 = var_needsConnected;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[95]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_dict_key_7 = var_newElement;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_64 = var_comm;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[25]);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 166;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_36 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_36, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_7;
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_36);
        goto try_except_handler_6;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 166;
        tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_24);
    }
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_expression_value_65;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_65 = var_comm;
        tmp_compexpr_left_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[23]);
        if (tmp_compexpr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_11 = mod_consts[118];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_11, tmp_compexpr_right_11);
        Py_DECREF(tmp_compexpr_left_11);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
        assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_44;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 169;
        tmp_assign_source_41 = CALL_FUNCTION_NO_ARGS(tmp_called_value_44);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_newElement;
            var_newElement = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_13;
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_68 = var_newElement;
        tmp_expression_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[29]);
        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_12 = mod_consts[115];
        tmp_expression_value_66 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_12);
        Py_DECREF(tmp_expression_value_67);
        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[116]);
        Py_DECREF(tmp_expression_value_66);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_70 = var_comm;
        tmp_expression_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[29]);
        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 170;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_13 = mod_consts[34];
        tmp_args_element_value_37 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_69, tmp_subscript_value_13, 0);
        Py_DECREF(tmp_expression_value_69);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 170;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 170;
        tmp_call_result_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_38;
        CHECK_OBJECT(var_newElement);
        tmp_called_instance_12 = var_newElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_38 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 171;
        tmp_call_result_26 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[56], tmp_args_element_value_38);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_value_39;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 172;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_13 = var_mainElement;
        CHECK_OBJECT(var_newElement);
        tmp_args_element_value_39 = var_newElement;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 172;
        tmp_call_result_27 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[117], tmp_args_element_value_39);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_72;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_71 = var_needsConnected;
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[95]);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_dict_key_8 = var_newElement;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_72 = var_comm;
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[25]);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 173;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_40 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_40, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_8;
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_40);
        goto try_except_handler_6;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 173;
        tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_28);
    }
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_expression_value_73;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_73 = var_comm;
        tmp_compexpr_left_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[23]);
        if (tmp_compexpr_left_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_12 = mod_consts[120];
        tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_12, tmp_compexpr_right_12);
        Py_DECREF(tmp_compexpr_left_12);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
        assert(tmp_condition_result_13 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_47;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 176;
        tmp_assign_source_42 = CALL_FUNCTION_NO_ARGS(tmp_called_value_47);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_newElement;
            var_newElement = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_subscript_value_15;
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_76 = var_newElement;
        tmp_expression_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[29]);
        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_14 = mod_consts[115];
        tmp_expression_value_74 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_14);
        Py_DECREF(tmp_expression_value_75);
        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[116]);
        Py_DECREF(tmp_expression_value_74);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_78 = var_comm;
        tmp_expression_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[29]);
        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 177;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_15 = mod_consts[34];
        tmp_args_element_value_41 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_77, tmp_subscript_value_15, 0);
        Py_DECREF(tmp_expression_value_77);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 177;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 177;
        tmp_call_result_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_41);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_value_42;
        CHECK_OBJECT(var_newElement);
        tmp_called_instance_14 = var_newElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_42 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 178;
        tmp_call_result_30 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_14, mod_consts[56], tmp_args_element_value_42);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_value_43;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_15 = var_mainElement;
        CHECK_OBJECT(var_newElement);
        tmp_args_element_value_43 = var_newElement;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 179;
        tmp_call_result_31 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[117], tmp_args_element_value_43);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_80;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_79 = var_needsConnected;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[95]);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_dict_key_9 = var_newElement;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_80 = var_comm;
        tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[25]);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 180;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_44 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_44, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_9;
        }
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_element_value_44);
        goto try_except_handler_6;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 180;
        tmp_call_result_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_32);
    }
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_expression_value_81;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_81 = var_comm;
        tmp_compexpr_left_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[23]);
        if (tmp_compexpr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_13 = mod_consts[122];
        tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_13, tmp_compexpr_right_13);
        Py_DECREF(tmp_compexpr_left_13);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        assert(tmp_condition_result_14 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_50;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 183;
        tmp_assign_source_43 = CALL_FUNCTION_NO_ARGS(tmp_called_value_50);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_newElement;
            var_newElement = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_call_result_33;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_subscript_value_17;
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_84 = var_newElement;
        tmp_expression_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[29]);
        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_16 = mod_consts[115];
        tmp_expression_value_82 = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_16);
        Py_DECREF(tmp_expression_value_83);
        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[116]);
        Py_DECREF(tmp_expression_value_82);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_86 = var_comm;
        tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[29]);
        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 184;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_17 = mod_consts[34];
        tmp_args_element_value_45 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_85, tmp_subscript_value_17, 0);
        Py_DECREF(tmp_expression_value_85);
        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 184;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 184;
        tmp_call_result_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_45);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_value_46;
        CHECK_OBJECT(var_newElement);
        tmp_called_instance_16 = var_newElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_46 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 185;
        tmp_call_result_34 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_16, mod_consts[56], tmp_args_element_value_46);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_call_result_35;
        PyObject *tmp_args_element_value_47;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_17 = var_mainElement;
        CHECK_OBJECT(var_newElement);
        tmp_args_element_value_47 = var_newElement;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 186;
        tmp_call_result_35 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_17, mod_consts[117], tmp_args_element_value_47);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_88;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_87 = var_needsConnected;
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[95]);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_dict_key_10 = var_newElement;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_88 = var_comm;
        tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[25]);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 187;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_48 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_48, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_10;
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_48);
        goto try_except_handler_6;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 187;
        tmp_call_result_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_36);
    }
    goto branch_end_13;
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        PyObject *tmp_expression_value_89;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_89 = var_comm;
        tmp_compexpr_left_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[23]);
        if (tmp_compexpr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_14 = mod_consts[124];
        tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_14, tmp_compexpr_right_14);
        Py_DECREF(tmp_compexpr_left_14);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
        assert(tmp_condition_result_15 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_53;
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 190;
        tmp_assign_source_44 = CALL_FUNCTION_NO_ARGS(tmp_called_value_53);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_newElement;
            var_newElement = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_call_result_37;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_subscript_value_19;
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_92 = var_newElement;
        tmp_expression_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[29]);
        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_18 = mod_consts[115];
        tmp_expression_value_90 = LOOKUP_SUBSCRIPT(tmp_expression_value_91, tmp_subscript_value_18);
        Py_DECREF(tmp_expression_value_91);
        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[116]);
        Py_DECREF(tmp_expression_value_90);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_94 = var_comm;
        tmp_expression_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[29]);
        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 191;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_19 = mod_consts[34];
        tmp_args_element_value_49 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_93, tmp_subscript_value_19, 0);
        Py_DECREF(tmp_expression_value_93);
        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 191;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 191;
        tmp_call_result_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_49);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_result_38;
        PyObject *tmp_args_element_value_50;
        CHECK_OBJECT(var_newElement);
        tmp_called_instance_18 = var_newElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_50 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 192;
        tmp_call_result_38 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_18, mod_consts[56], tmp_args_element_value_50);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_call_result_39;
        PyObject *tmp_args_element_value_51;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_19 = var_mainElement;
        CHECK_OBJECT(var_newElement);
        tmp_args_element_value_51 = var_newElement;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 193;
        tmp_call_result_39 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_19, mod_consts[117], tmp_args_element_value_51);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_96;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 194;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_95 = var_needsConnected;
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[95]);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_dict_key_11 = var_newElement;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_96 = var_comm;
        tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[25]);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 194;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_52 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_52, tmp_dict_key_11, tmp_dict_value_11);
        Py_DECREF(tmp_dict_value_11);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_11;
        }
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_element_value_52);
        goto try_except_handler_6;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 194;
        tmp_call_result_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_52);
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_40);
    }
    goto branch_end_14;
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_expression_value_97;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_97 = var_comm;
        tmp_compexpr_left_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[23]);
        if (tmp_compexpr_left_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_15 = mod_consts[126];
        tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_15, tmp_compexpr_right_15);
        Py_DECREF(tmp_compexpr_left_15);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
        assert(tmp_condition_result_16 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_56;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 197;
        tmp_assign_source_45 = CALL_FUNCTION_NO_ARGS(tmp_called_value_56);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_newElement;
            var_newElement = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_subscript_value_21;
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_100 = var_newElement;
        tmp_expression_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[29]);
        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_20 = mod_consts[115];
        tmp_expression_value_98 = LOOKUP_SUBSCRIPT(tmp_expression_value_99, tmp_subscript_value_20);
        Py_DECREF(tmp_expression_value_99);
        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[116]);
        Py_DECREF(tmp_expression_value_98);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_102 = var_comm;
        tmp_expression_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[29]);
        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 198;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_21 = mod_consts[34];
        tmp_args_element_value_53 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_101, tmp_subscript_value_21, 0);
        Py_DECREF(tmp_expression_value_101);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 198;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 198;
        tmp_call_result_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_57, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_42;
        PyObject *tmp_args_element_value_54;
        CHECK_OBJECT(var_newElement);
        tmp_called_instance_20 = var_newElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_54 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 199;
        tmp_call_result_42 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_20, mod_consts[56], tmp_args_element_value_54);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_call_result_43;
        PyObject *tmp_args_element_value_55;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 200;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_21 = var_mainElement;
        CHECK_OBJECT(var_newElement);
        tmp_args_element_value_55 = var_newElement;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 200;
        tmp_call_result_43 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_21, mod_consts[117], tmp_args_element_value_55);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_value_104;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 201;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_103 = var_needsConnected;
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[95]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_dict_key_12 = var_newElement;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_104 = var_comm;
        tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[25]);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 201;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_56 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_56, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_12;
        }
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_56);
        goto try_except_handler_6;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 201;
        tmp_call_result_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_56);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_44);
    }
    goto branch_end_15;
    branch_no_15:;
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        PyObject *tmp_expression_value_105;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_105 = var_comm;
        tmp_compexpr_left_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[23]);
        if (tmp_compexpr_left_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_16 = mod_consts[128];
        tmp_condition_result_17 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_16, tmp_compexpr_right_16);
        Py_DECREF(tmp_compexpr_left_16);
        if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
        assert(tmp_condition_result_17 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_59;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 204;
        tmp_assign_source_46 = CALL_FUNCTION_NO_ARGS(tmp_called_value_59);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_newElement;
            var_newElement = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_call_result_45;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_subscript_value_23;
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_108 = var_newElement;
        tmp_expression_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[29]);
        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_22 = mod_consts[115];
        tmp_expression_value_106 = LOOKUP_SUBSCRIPT(tmp_expression_value_107, tmp_subscript_value_22);
        Py_DECREF(tmp_expression_value_107);
        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[116]);
        Py_DECREF(tmp_expression_value_106);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_110 = var_comm;
        tmp_expression_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[29]);
        if (tmp_expression_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 205;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_23 = mod_consts[34];
        tmp_args_element_value_57 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_109, tmp_subscript_value_23, 0);
        Py_DECREF(tmp_expression_value_109);
        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 205;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 205;
        tmp_call_result_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_57);
        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_instance_22;
        PyObject *tmp_call_result_46;
        PyObject *tmp_args_element_value_58;
        CHECK_OBJECT(var_newElement);
        tmp_called_instance_22 = var_newElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_58 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 206;
        tmp_call_result_46 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_22, mod_consts[56], tmp_args_element_value_58);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_instance_23;
        PyObject *tmp_call_result_47;
        PyObject *tmp_args_element_value_59;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_23 = var_mainElement;
        CHECK_OBJECT(var_newElement);
        tmp_args_element_value_59 = var_newElement;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 207;
        tmp_call_result_47 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_23, mod_consts[117], tmp_args_element_value_59);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_call_result_48;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_expression_value_112;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_111 = var_needsConnected;
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[95]);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_dict_key_13 = var_newElement;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_112 = var_comm;
        tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[25]);
        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 208;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_60 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_60, tmp_dict_key_13, tmp_dict_value_13);
        Py_DECREF(tmp_dict_value_13);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_13;
        }
        goto dict_build_noexception_13;
        // Exception handling pass through code for dict_build:
        dict_build_exception_13:;
        Py_DECREF(tmp_called_value_61);
        Py_DECREF(tmp_args_element_value_60);
        goto try_except_handler_6;
        // Finished with no exception for dict_build:
        dict_build_noexception_13:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 208;
        tmp_call_result_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_61, tmp_args_element_value_60);
        Py_DECREF(tmp_called_value_61);
        Py_DECREF(tmp_args_element_value_60);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_48);
    }
    goto branch_end_16;
    branch_no_16:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        PyObject *tmp_expression_value_113;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_113 = var_comm;
        tmp_compexpr_left_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[23]);
        if (tmp_compexpr_left_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_17 = mod_consts[130];
        tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_17, tmp_compexpr_right_17);
        Py_DECREF(tmp_compexpr_left_17);
        if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
        assert(tmp_condition_result_18 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_62;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 211;
        tmp_assign_source_47 = CALL_FUNCTION_NO_ARGS(tmp_called_value_62);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_newElement;
            var_newElement = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_call_result_49;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_subscript_value_25;
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_116 = var_newElement;
        tmp_expression_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[29]);
        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_24 = mod_consts[115];
        tmp_expression_value_114 = LOOKUP_SUBSCRIPT(tmp_expression_value_115, tmp_subscript_value_24);
        Py_DECREF(tmp_expression_value_115);
        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[116]);
        Py_DECREF(tmp_expression_value_114);
        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_118 = var_comm;
        tmp_expression_value_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[29]);
        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 212;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_25 = mod_consts[34];
        tmp_args_element_value_61 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_117, tmp_subscript_value_25, 0);
        Py_DECREF(tmp_expression_value_117);
        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 212;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 212;
        tmp_call_result_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_args_element_value_61);
        Py_DECREF(tmp_called_value_63);
        Py_DECREF(tmp_args_element_value_61);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_instance_24;
        PyObject *tmp_call_result_50;
        PyObject *tmp_args_element_value_62;
        CHECK_OBJECT(var_newElement);
        tmp_called_instance_24 = var_newElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_62 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 213;
        tmp_call_result_50 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_24, mod_consts[56], tmp_args_element_value_62);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_instance_25;
        PyObject *tmp_call_result_51;
        PyObject *tmp_args_element_value_63;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_25 = var_mainElement;
        CHECK_OBJECT(var_newElement);
        tmp_args_element_value_63 = var_newElement;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 214;
        tmp_call_result_51 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_25, mod_consts[117], tmp_args_element_value_63);
        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_call_result_52;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_value_120;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_119 = var_needsConnected;
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[95]);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_dict_key_14 = var_newElement;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_120 = var_comm;
        tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[25]);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 215;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_64 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_64, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_14;
        }
        goto dict_build_noexception_14;
        // Exception handling pass through code for dict_build:
        dict_build_exception_14:;
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_64);
        goto try_except_handler_6;
        // Finished with no exception for dict_build:
        dict_build_noexception_14:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 215;
        tmp_call_result_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_64);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_52);
    }
    goto branch_end_17;
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_compexpr_left_18;
        PyObject *tmp_compexpr_right_18;
        PyObject *tmp_expression_value_121;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_121 = var_comm;
        tmp_compexpr_left_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[23]);
        if (tmp_compexpr_left_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_18 = mod_consts[131];
        tmp_condition_result_19 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_18, tmp_compexpr_right_18);
        Py_DECREF(tmp_compexpr_left_18);
        if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
        assert(tmp_condition_result_19 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_122;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_122 = var_comm;
        tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[62]);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_48 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_newElement;
            var_newElement = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_26;
        PyObject *tmp_call_result_53;
        PyObject *tmp_args_element_value_65;
        CHECK_OBJECT(var_newElement);
        tmp_called_instance_26 = var_newElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_65 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 220;
        tmp_call_result_53 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_26, mod_consts[56], tmp_args_element_value_65);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_instance_27;
        PyObject *tmp_call_result_54;
        PyObject *tmp_args_element_value_66;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_27 = var_mainElement;
        CHECK_OBJECT(var_newElement);
        tmp_args_element_value_66 = var_newElement;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 221;
        tmp_call_result_54 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_27, mod_consts[117], tmp_args_element_value_66);
        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_call_result_55;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_expression_value_124;
        if (var_mainWidget == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_123 = var_mainWidget;
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[133]);
        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_124 = var_newElement;
        tmp_args_element_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[60]);
        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);

            exception_lineno = 222;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 222;
        tmp_call_result_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_67);
        Py_DECREF(tmp_called_value_65);
        Py_DECREF(tmp_args_element_value_67);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_call_result_56;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_value_126;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 223;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_125 = var_needsConnected;
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[95]);
        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_dict_key_15 = var_newElement;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_126 = var_comm;
        tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[25]);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 223;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_68 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_68, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_15;
        }
        goto dict_build_noexception_15;
        // Exception handling pass through code for dict_build:
        dict_build_exception_15:;
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_args_element_value_68);
        goto try_except_handler_6;
        // Finished with no exception for dict_build:
        dict_build_noexception_15:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 223;
        tmp_call_result_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_68);
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_args_element_value_68);
        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_56);
    }
    goto branch_end_18;
    branch_no_18:;
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_compexpr_left_19;
        PyObject *tmp_compexpr_right_19;
        PyObject *tmp_expression_value_127;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_127 = var_comm;
        tmp_compexpr_left_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[23]);
        if (tmp_compexpr_left_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_19 = mod_consts[134];
        tmp_condition_result_20 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_19, tmp_compexpr_right_19);
        Py_DECREF(tmp_compexpr_left_19);
        if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
        assert(tmp_condition_result_20 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_expression_value_128;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_128 = var_comm;
        tmp_dircall_arg2_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[62]);
        if (tmp_dircall_arg2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_assign_source_49 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_newElement;
            var_newElement = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_28;
        PyObject *tmp_call_result_57;
        PyObject *tmp_args_element_value_69;
        CHECK_OBJECT(var_newElement);
        tmp_called_instance_28 = var_newElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_69 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 227;
        tmp_call_result_57 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_28, mod_consts[56], tmp_args_element_value_69);
        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_instance_29;
        PyObject *tmp_call_result_58;
        PyObject *tmp_args_element_value_70;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 228;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_29 = var_mainElement;
        CHECK_OBJECT(var_newElement);
        tmp_args_element_value_70 = var_newElement;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 228;
        tmp_call_result_58 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_29, mod_consts[117], tmp_args_element_value_70);
        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_call_result_59;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_expression_value_130;
        if (var_mainWidget == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 229;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_129 = var_mainWidget;
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[133]);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_130 = var_newElement;
        tmp_args_element_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[60]);
        if (tmp_args_element_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 229;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 229;
        tmp_call_result_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_67, tmp_args_element_value_71);
        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_element_value_71);
        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_call_result_60;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_value_132;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_131 = var_needsConnected;
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[95]);
        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_dict_key_16 = var_newElement;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_132 = var_comm;
        tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[25]);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 230;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_72 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_72, tmp_dict_key_16, tmp_dict_value_16);
        Py_DECREF(tmp_dict_value_16);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_16;
        }
        goto dict_build_noexception_16;
        // Exception handling pass through code for dict_build:
        dict_build_exception_16:;
        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_element_value_72);
        goto try_except_handler_6;
        // Finished with no exception for dict_build:
        dict_build_noexception_16:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 230;
        tmp_call_result_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_68, tmp_args_element_value_72);
        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_60);
    }
    goto branch_end_19;
    branch_no_19:;
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_compexpr_left_20;
        PyObject *tmp_compexpr_right_20;
        PyObject *tmp_expression_value_133;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_133 = var_comm;
        tmp_compexpr_left_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[23]);
        if (tmp_compexpr_left_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_20 = mod_consts[135];
        tmp_condition_result_21 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_20, tmp_compexpr_right_20);
        Py_DECREF(tmp_compexpr_left_20);
        if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
        assert(tmp_condition_result_21 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_expression_value_134;
        tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_dircall_arg1_3 == NULL)) {
            tmp_dircall_arg1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_dircall_arg1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_134 = var_comm;
        tmp_dircall_arg2_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[62]);
        if (tmp_dircall_arg2_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3};
            tmp_assign_source_50 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_newElement;
            var_newElement = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_call_result_61;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_subscript_value_27;
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_137 = var_newElement;
        tmp_expression_value_136 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[29]);
        if (tmp_expression_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_26 = mod_consts[115];
        tmp_expression_value_135 = LOOKUP_SUBSCRIPT(tmp_expression_value_136, tmp_subscript_value_26);
        Py_DECREF(tmp_expression_value_136);
        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[116]);
        Py_DECREF(tmp_expression_value_135);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_139 = var_comm;
        tmp_expression_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[29]);
        if (tmp_expression_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 235;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_27 = mod_consts[34];
        tmp_args_element_value_73 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_138, tmp_subscript_value_27, 0);
        Py_DECREF(tmp_expression_value_138);
        if (tmp_args_element_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 235;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 235;
        tmp_call_result_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_69, tmp_args_element_value_73);
        Py_DECREF(tmp_called_value_69);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_instance_30;
        PyObject *tmp_call_result_62;
        PyObject *tmp_args_element_value_74;
        CHECK_OBJECT(var_newElement);
        tmp_called_instance_30 = var_newElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_74 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 236;
        tmp_call_result_62 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_30, mod_consts[56], tmp_args_element_value_74);
        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_instance_31;
        PyObject *tmp_call_result_63;
        PyObject *tmp_args_element_value_75;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_31 = var_mainElement;
        CHECK_OBJECT(var_newElement);
        tmp_args_element_value_75 = var_newElement;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 237;
        tmp_call_result_63 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_31, mod_consts[117], tmp_args_element_value_75);
        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_call_result_64;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_expression_value_141;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 238;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_140 = var_mainElement;
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[136]);
        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_141 = var_newElement;
        tmp_args_element_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[137]);
        if (tmp_args_element_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 238;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 238;
        tmp_call_result_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_70, tmp_args_element_value_76);
        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_64);
    }
    goto branch_end_20;
    branch_no_20:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_compexpr_left_21;
        PyObject *tmp_compexpr_right_21;
        PyObject *tmp_expression_value_142;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_142 = var_comm;
        tmp_compexpr_left_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[23]);
        if (tmp_compexpr_left_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_21 = mod_consts[138];
        tmp_condition_result_22 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_21, tmp_compexpr_right_21);
        Py_DECREF(tmp_compexpr_left_21);
        if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
        assert(tmp_condition_result_22 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_dircall_arg1_4;
        PyObject *tmp_dircall_arg2_4;
        PyObject *tmp_expression_value_143;
        tmp_dircall_arg1_4 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_dircall_arg1_4 == NULL)) {
            tmp_dircall_arg1_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_dircall_arg1_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_143 = var_comm;
        tmp_dircall_arg2_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[62]);
        if (tmp_dircall_arg2_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4};
            tmp_assign_source_51 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_newElement;
            var_newElement = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_subscript_value_28;
        PyObject *tmp_call_result_65;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_subscript_value_29;
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_146 = var_newElement;
        tmp_expression_value_145 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[29]);
        if (tmp_expression_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_28 = mod_consts[115];
        tmp_expression_value_144 = LOOKUP_SUBSCRIPT(tmp_expression_value_145, tmp_subscript_value_28);
        Py_DECREF(tmp_expression_value_145);
        if (tmp_expression_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[116]);
        Py_DECREF(tmp_expression_value_144);
        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_comm);
        tmp_expression_value_148 = var_comm;
        tmp_expression_value_147 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[29]);
        if (tmp_expression_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);

            exception_lineno = 242;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_29 = mod_consts[34];
        tmp_args_element_value_77 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_147, tmp_subscript_value_29, 0);
        Py_DECREF(tmp_expression_value_147);
        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);

            exception_lineno = 242;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 242;
        tmp_call_result_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_71, tmp_args_element_value_77);
        Py_DECREF(tmp_called_value_71);
        Py_DECREF(tmp_args_element_value_77);
        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_instance_32;
        PyObject *tmp_call_result_66;
        PyObject *tmp_args_element_value_78;
        CHECK_OBJECT(var_newElement);
        tmp_called_instance_32 = var_newElement;
        CHECK_OBJECT(par_id);
        tmp_args_element_value_78 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 243;
        tmp_call_result_66 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_32, mod_consts[56], tmp_args_element_value_78);
        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_instance_33;
        PyObject *tmp_call_result_67;
        PyObject *tmp_args_element_value_79;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 244;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_33 = var_mainElement;
        CHECK_OBJECT(var_newElement);
        tmp_args_element_value_79 = var_newElement;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 244;
        tmp_call_result_67 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_33, mod_consts[117], tmp_args_element_value_79);
        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_call_result_68;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_expression_value_150;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 245;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_149 = var_mainElement;
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[136]);
        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_150 = var_newElement;
        tmp_args_element_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[137]);
        if (tmp_args_element_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 245;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 245;
        tmp_call_result_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_72, tmp_args_element_value_80);
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_element_value_80);
        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_68);
    }
    goto branch_end_21;
    branch_no_21:;
    {
        bool tmp_condition_result_23;
        PyObject *tmp_compexpr_left_22;
        PyObject *tmp_compexpr_right_22;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_called_value_73;
        PyObject *tmp_expression_value_152;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_151 = var_comm;
        tmp_compexpr_left_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[23]);
        if (tmp_compexpr_left_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_registeredElements == NULL) {
            Py_DECREF(tmp_compexpr_left_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 247;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_152 = var_registeredElements;
        tmp_called_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[70]);
        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_22);

            exception_lineno = 247;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 247;
        tmp_compexpr_right_22 = CALL_FUNCTION_NO_ARGS(tmp_called_value_73);
        Py_DECREF(tmp_called_value_73);
        if (tmp_compexpr_right_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_22);

            exception_lineno = 247;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_22, tmp_compexpr_left_22);
        Py_DECREF(tmp_compexpr_left_22);
        Py_DECREF(tmp_compexpr_right_22);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_23 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_value_74;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        if (var_registeredElements == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 248;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_expression_value_153 = var_registeredElements;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_154 = var_comm;
        tmp_subscript_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[23]);
        if (tmp_subscript_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_kw_call_arg_value_0_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_153, tmp_subscript_value_30);
        Py_DECREF(tmp_subscript_value_30);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        if (par_cwd == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[140]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 248;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_kw_call_dict_value_0_3 = par_cwd;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_155 = var_comm;
        tmp_kw_call_dict_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[62]);
        if (tmp_kw_call_dict_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 248;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT(par_id);
        tmp_kw_call_dict_value_2_1 = par_id;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 248;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1};
            tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_74, args, kw_values, mod_consts[141]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        if (tmp_iter_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_52 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_53 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooNooooooooooooooooooooo";
            exception_lineno = 248;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_54 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooNooooooooooooooooooooo";
            exception_lineno = 248;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooNooooooooooooooooooooo";
                    exception_lineno = 248;
                    goto try_except_handler_14;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[17];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooNooooooooooooooooooooo";
            exception_lineno = 248;
            goto try_except_handler_14;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_13;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_6;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_55 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_newElement;
            var_newElement = tmp_assign_source_55;
            Py_INCREF(var_newElement);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_56 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_newWidget;
            var_newWidget = tmp_assign_source_56;
            Py_INCREF(var_newWidget);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_call_result_69;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_expression_value_157;
        if (var_log == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_156 = var_log;
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[19]);
        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_157 = var_newElement;
        tmp_args_element_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[25]);
        if (tmp_args_element_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_75);

            exception_lineno = 250;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 250;
        tmp_call_result_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_75, tmp_args_element_value_81);
        Py_DECREF(tmp_called_value_75);
        Py_DECREF(tmp_args_element_value_81);
        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_call_result_70;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_expression_value_159;
        if (var_log == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 251;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_158 = var_log;
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[19]);
        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_159 = var_newElement;
        tmp_args_element_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[29]);
        if (tmp_args_element_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 251;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 251;
        tmp_call_result_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_76, tmp_args_element_value_82);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_77;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_expression_value_161;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_newElement);
        tmp_expression_value_161 = var_newElement;
        tmp_expression_value_160 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[29]);
        if (tmp_expression_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[70]);
        Py_DECREF(tmp_expression_value_160);
        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 254;
        tmp_args_element_value_83 = CALL_FUNCTION_NO_ARGS(tmp_called_value_78);
        Py_DECREF(tmp_called_value_78);
        if (tmp_args_element_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 254;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_77, tmp_args_element_value_83);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_names;
            var_names = tmp_assign_source_57;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_value_79;
        PyObject *tmp_args_element_value_84;
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_names);
        tmp_args_element_value_84 = var_names;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 255;
        tmp_iter_arg_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_79, tmp_args_element_value_84);
        if (tmp_iter_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_58 = MAKE_ITERATOR(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_58;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_5 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_59 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_59 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                exception_lineno = 255;
                goto try_except_handler_15;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_iter_arg_8;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_iter_arg_8 = tmp_for_loop_4__iter_value;
        tmp_assign_source_60 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_61 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_61 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooNooooooooooooooooooooo";
            exception_lineno = 255;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_62 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_62 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooNooooooooooooooooooooo";
            exception_lineno = 255;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooNooooooooooooooooooooo";
                    exception_lineno = 255;
                    goto try_except_handler_17;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[17];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooNooooooooooooooooooooo";
            exception_lineno = 255;
            goto try_except_handler_17;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_16;
    // End of try:
    try_end_11:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_63 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_63;
            Py_INCREF(var_n);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_64 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_64;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_subscript_value_31;
        PyObject *tmp_call_result_71;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_subscript_value_32;
        if (var_newElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_164 = var_newElement;
        tmp_expression_value_163 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[29]);
        if (tmp_expression_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_name);
        tmp_subscript_value_31 = var_name;
        tmp_expression_value_162 = LOOKUP_SUBSCRIPT(tmp_expression_value_163, tmp_subscript_value_31);
        Py_DECREF(tmp_expression_value_163);
        if (tmp_expression_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[116]);
        Py_DECREF(tmp_expression_value_162);
        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        if (var_comm == NULL) {
            Py_DECREF(tmp_called_value_80);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_166 = var_comm;
        tmp_expression_value_165 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[29]);
        if (tmp_expression_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 256;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_n);
        tmp_subscript_value_32 = var_n;
        tmp_args_element_value_85 = LOOKUP_SUBSCRIPT(tmp_expression_value_165, tmp_subscript_value_32);
        Py_DECREF(tmp_expression_value_165);
        if (tmp_args_element_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 256;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 256;
        tmp_call_result_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_80, tmp_args_element_value_85);
        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_args_element_value_85);
        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_71);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 255;
        type_description_1 = "oooooooooNooooooooooooooooooooo";
        goto try_except_handler_15;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_6;
    // End of try:
    try_end_13:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_call_result_72;
        PyObject *tmp_args_element_value_86;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 258;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_167 = var_mainElement;
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[117]);
        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_newElement == NULL) {
            Py_DECREF(tmp_called_value_81);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 258;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_86 = var_newElement;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 258;
        tmp_call_result_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_81, tmp_args_element_value_86);
        Py_DECREF(tmp_called_value_81);
        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        bool tmp_condition_result_24;
        PyObject *tmp_compexpr_left_23;
        PyObject *tmp_compexpr_right_23;
        CHECK_OBJECT(var_newWidget);
        tmp_compexpr_left_23 = var_newWidget;
        tmp_compexpr_right_23 = Py_None;
        tmp_condition_result_24 = (tmp_compexpr_left_23 != tmp_compexpr_right_23) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_called_instance_34;
        PyObject *tmp_call_result_73;
        PyObject *tmp_args_element_value_87;
        if (var_mainWidget == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 260;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_34 = var_mainWidget;
        CHECK_OBJECT(var_newWidget);
        tmp_args_element_value_87 = var_newWidget;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 260;
        tmp_call_result_73 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_34, mod_consts[133], tmp_args_element_value_87);
        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_73);
    }
    branch_no_23:;
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = PyList_New(0);
        {
            PyObject *old = var_pins;
            var_pins = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_value_82;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_called_value_83;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_expression_value_168;
        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_82 == NULL)) {
            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_newElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 265;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_168 = var_newElement;
        tmp_args_element_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[25]);
        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 265;
        tmp_args_element_value_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_83, tmp_args_element_value_89);
        Py_DECREF(tmp_args_element_value_89);
        if (tmp_args_element_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 265;
        tmp_iter_arg_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_82, tmp_args_element_value_88);
        Py_DECREF(tmp_args_element_value_88);
        if (tmp_iter_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_66 = MAKE_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_67;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_6 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_67 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_67 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                exception_lineno = 265;
                goto try_except_handler_18;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_68 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_68;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_35;
        PyObject *tmp_call_result_74;
        PyObject *tmp_args_element_value_90;
        if (var_log == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 266;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_called_instance_35 = var_log;
        CHECK_OBJECT(var_i);
        tmp_args_element_value_90 = var_i;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 266;
        tmp_call_result_74 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_35, mod_consts[19], tmp_args_element_value_90);
        if (tmp_call_result_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_call_result_75;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_subscript_value_33;
        if (var_pins == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 267;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_expression_value_169 = var_pins;
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[147]);
        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        if (var_comm == NULL) {
            Py_DECREF(tmp_called_value_84);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 267;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_expression_value_171 = var_comm;
        tmp_expression_value_170 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[25]);
        if (tmp_expression_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 267;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        CHECK_OBJECT(var_i);
        tmp_subscript_value_33 = var_i;
        tmp_args_element_value_91 = LOOKUP_SUBSCRIPT(tmp_expression_value_170, tmp_subscript_value_33);
        Py_DECREF(tmp_expression_value_170);
        if (tmp_args_element_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 267;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 267;
        tmp_call_result_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_84, tmp_args_element_value_91);
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_args_element_value_91);
        if (tmp_call_result_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_75);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 265;
        type_description_1 = "oooooooooNooooooooooooooooooooo";
        goto try_except_handler_18;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_6;
    // End of try:
    try_end_14:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_call_result_76;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 268;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_172 = var_needsConnected;
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[95]);
        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_newElement == NULL) {
            Py_DECREF(tmp_called_value_85);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 268;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_dict_key_17 = var_newElement;
        if (var_pins == NULL) {
            Py_DECREF(tmp_called_value_85);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 268;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_dict_value_17 = var_pins;
        tmp_args_element_value_92 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_92, tmp_dict_key_17, tmp_dict_value_17);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto dict_build_exception_17;
        }
        goto dict_build_noexception_17;
        // Exception handling pass through code for dict_build:
        dict_build_exception_17:;
        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_args_element_value_92);
        goto try_except_handler_6;
        // Finished with no exception for dict_build:
        dict_build_noexception_17:;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 268;
        tmp_call_result_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_85, tmp_args_element_value_92);
        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_args_element_value_92);
        if (tmp_call_result_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_call_result_77;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_expression_value_174;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 270;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_173 = var_mainElement;
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[136]);
        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_newElement == NULL) {
            Py_DECREF(tmp_called_value_86);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 270;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_174 = var_newElement;
        tmp_args_element_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[137]);
        if (tmp_args_element_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 270;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 270;
        tmp_call_result_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_86, tmp_args_element_value_93);
        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_args_element_value_93);
        if (tmp_call_result_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_77);
    }
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_call_result_78;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_called_value_88;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_expression_value_177;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_175 = mod_consts[54];
        tmp_called_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[52]);
        assert(!(tmp_called_value_89 == NULL));
        CHECK_OBJECT(var_comm);
        tmp_expression_value_176 = var_comm;
        tmp_args_element_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[55]);
        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 273;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 273;
        tmp_args_element_value_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_89, tmp_args_element_value_96);
        Py_DECREF(tmp_called_value_89);
        Py_DECREF(tmp_args_element_value_96);
        if (tmp_args_element_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(par_id);
        tmp_args_element_value_97 = par_id;
        if (par_filePath == NULL) {
            Py_DECREF(tmp_args_element_value_95);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 273;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_98 = par_filePath;
        CHECK_OBJECT(var_comm);
        tmp_expression_value_177 = var_comm;
        tmp_args_element_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[42]);
        if (tmp_args_element_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_95);

            exception_lineno = 273;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_args_element_value_95, tmp_args_element_value_97, tmp_args_element_value_98, tmp_args_element_value_99};
            tmp_args_element_value_94 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_88, call_args);
        }

        Py_DECREF(tmp_args_element_value_95);
        Py_DECREF(tmp_args_element_value_99);
        if (tmp_args_element_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 273;
        tmp_call_result_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_87, tmp_args_element_value_94);
        Py_DECREF(tmp_args_element_value_94);
        if (tmp_call_result_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_78);
    }
    branch_end_22:;
    branch_end_21:;
    branch_end_20:;
    branch_end_19:;
    branch_end_18:;
    branch_end_17:;
    branch_end_16:;
    branch_end_15:;
    branch_end_14:;
    branch_end_13:;
    branch_end_12:;
    branch_end_11:;
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    {
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_1;
        if (var_performIOChecks == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[148]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 277;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_performIOChecks);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_25 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_compexpr_left_24;
        PyObject *tmp_compexpr_right_24;
        PyObject *tmp_called_value_90;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_called_value_91;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_expression_value_179;
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_newElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_178 = var_newElement;
        tmp_args_element_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[25]);
        if (tmp_args_element_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 278;
        tmp_compexpr_left_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_90, tmp_args_element_value_100);
        Py_DECREF(tmp_args_element_value_100);
        if (tmp_compexpr_left_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_24);

            exception_lineno = 278;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_comm == NULL) {
            Py_DECREF(tmp_compexpr_left_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_179 = var_comm;
        tmp_args_element_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[25]);
        if (tmp_args_element_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_24);

            exception_lineno = 278;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 278;
        tmp_compexpr_right_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_91, tmp_args_element_value_101);
        Py_DECREF(tmp_args_element_value_101);
        if (tmp_compexpr_right_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_24);

            exception_lineno = 278;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_26 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_24, tmp_compexpr_right_24);
        Py_DECREF(tmp_compexpr_left_24);
        Py_DECREF(tmp_compexpr_right_24);
        if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
        assert(tmp_condition_result_26 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_value_92;
        PyObject *tmp_call_result_79;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_called_value_93;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_called_value_94;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_called_value_95;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_expression_value_182;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_180 = mod_consts[149];
        tmp_called_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[52]);
        assert(!(tmp_called_value_94 == NULL));
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 279;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_comm == NULL) {
            Py_DECREF(tmp_called_value_94);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_181 = var_comm;
        tmp_args_element_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[25]);
        if (tmp_args_element_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 279;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 279;
        tmp_args_element_value_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_95, tmp_args_element_value_105);
        Py_DECREF(tmp_args_element_value_105);
        if (tmp_args_element_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 279;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 279;
        tmp_args_element_value_103 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_94, tmp_args_element_value_104);
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_args_element_value_104);
        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (par_id == NULL) {
            Py_DECREF(tmp_args_element_value_103);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_106 = par_id;
        if (par_filePath == NULL) {
            Py_DECREF(tmp_args_element_value_103);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_107 = par_filePath;
        if (var_comm == NULL) {
            Py_DECREF(tmp_args_element_value_103);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_182 = var_comm;
        tmp_args_element_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[42]);
        if (tmp_args_element_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_103);

            exception_lineno = 279;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 279;
        {
            PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_106, tmp_args_element_value_107, tmp_args_element_value_108};
            tmp_args_element_value_102 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_93, call_args);
        }

        Py_DECREF(tmp_args_element_value_103);
        Py_DECREF(tmp_args_element_value_108);
        if (tmp_args_element_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 279;
        tmp_call_result_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_92, tmp_args_element_value_102);
        Py_DECREF(tmp_args_element_value_102);
        if (tmp_call_result_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_79);
    }
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_compexpr_left_25;
        PyObject *tmp_compexpr_right_25;
        PyObject *tmp_called_value_96;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_called_value_97;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_expression_value_184;
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_newElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 280;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_183 = var_newElement;
        tmp_args_element_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[29]);
        if (tmp_args_element_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 280;
        tmp_compexpr_left_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_96, tmp_args_element_value_109);
        Py_DECREF(tmp_args_element_value_109);
        if (tmp_compexpr_left_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_25);

            exception_lineno = 280;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_comm == NULL) {
            Py_DECREF(tmp_compexpr_left_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 280;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_184 = var_comm;
        tmp_args_element_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[29]);
        if (tmp_args_element_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_25);

            exception_lineno = 280;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 280;
        tmp_compexpr_right_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_97, tmp_args_element_value_110);
        Py_DECREF(tmp_args_element_value_110);
        if (tmp_compexpr_right_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_25);

            exception_lineno = 280;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_27 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_25, tmp_compexpr_right_25);
        Py_DECREF(tmp_compexpr_left_25);
        Py_DECREF(tmp_compexpr_right_25);
        if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
        assert(tmp_condition_result_27 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_26:;
    {
        PyObject *tmp_called_value_98;
        PyObject *tmp_call_result_80;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_called_value_99;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_called_value_100;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_called_value_101;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_expression_value_187;
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_185 = mod_consts[150];
        tmp_called_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[52]);
        assert(!(tmp_called_value_100 == NULL));
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 281;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_comm == NULL) {
            Py_DECREF(tmp_called_value_100);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 281;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_186 = var_comm;
        tmp_args_element_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[29]);
        if (tmp_args_element_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 281;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 281;
        tmp_args_element_value_113 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_101, tmp_args_element_value_114);
        Py_DECREF(tmp_args_element_value_114);
        if (tmp_args_element_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 281;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 281;
        tmp_args_element_value_112 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_100, tmp_args_element_value_113);
        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_args_element_value_113);
        if (tmp_args_element_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (par_id == NULL) {
            Py_DECREF(tmp_args_element_value_112);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 281;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_115 = par_id;
        if (par_filePath == NULL) {
            Py_DECREF(tmp_args_element_value_112);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 281;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_116 = par_filePath;
        if (var_comm == NULL) {
            Py_DECREF(tmp_args_element_value_112);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 281;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_187 = var_comm;
        tmp_args_element_value_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[42]);
        if (tmp_args_element_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_112);

            exception_lineno = 281;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 281;
        {
            PyObject *call_args[] = {tmp_args_element_value_112, tmp_args_element_value_115, tmp_args_element_value_116, tmp_args_element_value_117};
            tmp_args_element_value_111 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_99, call_args);
        }

        Py_DECREF(tmp_args_element_value_112);
        Py_DECREF(tmp_args_element_value_117);
        if (tmp_args_element_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 281;
        tmp_call_result_80 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_98, tmp_args_element_value_111);
        Py_DECREF(tmp_args_element_value_111);
        if (tmp_call_result_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_80);
    }
    branch_no_26:;
    branch_no_24:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 141;
        type_description_1 = "oooooooooNooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_102;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_call_result_81;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_called_value_103;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_iterable_value_2;
        if (var_log == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 285;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_188 = var_log;
        tmp_called_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[3]);
        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_189 = mod_consts[151];
        tmp_called_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[52]);
        assert(!(tmp_called_value_103 == NULL));
        if (var_mainElement == NULL) {
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_103);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 285;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_190 = var_mainElement;
        tmp_args_element_value_119 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[40]);
        if (tmp_args_element_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 285;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_str_arg_value_2 = mod_consts[152];
        // Tried code:
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_iter_arg_10;
            PyObject *tmp_expression_value_191;
            if (var_mainElement == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[111]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 285;
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                goto try_except_handler_19;
            }

            tmp_expression_value_191 = var_mainElement;
            tmp_iter_arg_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[153]);
            if (tmp_iter_arg_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                goto try_except_handler_19;
            }
            tmp_assign_source_69 = MAKE_ITERATOR(tmp_iter_arg_10);
            Py_DECREF(tmp_iter_arg_10);
            if (tmp_assign_source_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                goto try_except_handler_19;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_69;
        }
        {
            PyObject *tmp_assign_source_70;
            tmp_assign_source_70 = PyList_New(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_70;
        }
        if (isFrameUnusable(cache_frame_526f2a6b1cf1e77ae275a18dc17986a6_3)) {
            Py_XDECREF(cache_frame_526f2a6b1cf1e77ae275a18dc17986a6_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_526f2a6b1cf1e77ae275a18dc17986a6_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_526f2a6b1cf1e77ae275a18dc17986a6_3 = MAKE_FUNCTION_FRAME(codeobj_526f2a6b1cf1e77ae275a18dc17986a6, module_loading$loading, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_526f2a6b1cf1e77ae275a18dc17986a6_3->m_type_description == NULL);
        frame_526f2a6b1cf1e77ae275a18dc17986a6_3 = cache_frame_526f2a6b1cf1e77ae275a18dc17986a6_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_526f2a6b1cf1e77ae275a18dc17986a6_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_526f2a6b1cf1e77ae275a18dc17986a6_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_71;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_7 = tmp_listcomp_2__$0;
            tmp_assign_source_71 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_71 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 285;
                    goto try_except_handler_20;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_71;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_72;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_72 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_e;
                outline_1_var_e = tmp_assign_source_72;
                Py_INCREF(outline_1_var_e);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_value_104;
            PyObject *tmp_args_element_value_121;
            PyObject *tmp_expression_value_192;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[154]);

            if (unlikely(tmp_called_value_104 == NULL)) {
                tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
            }

            if (tmp_called_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            CHECK_OBJECT(outline_1_var_e);
            tmp_expression_value_192 = outline_1_var_e;
            tmp_args_element_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[40]);
            if (tmp_args_element_value_121 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            frame_526f2a6b1cf1e77ae275a18dc17986a6_3->m_frame.f_lineno = 285;
            tmp_append_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_104, tmp_args_element_value_121);
            Py_DECREF(tmp_args_element_value_121);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(PyList_Check(tmp_append_list_2));
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_2 = "o";
            goto try_except_handler_20;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_iterable_value_2 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_iterable_value_2);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_526f2a6b1cf1e77ae275a18dc17986a6_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_526f2a6b1cf1e77ae275a18dc17986a6_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_19;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_526f2a6b1cf1e77ae275a18dc17986a6_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_526f2a6b1cf1e77ae275a18dc17986a6_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_526f2a6b1cf1e77ae275a18dc17986a6_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_526f2a6b1cf1e77ae275a18dc17986a6_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_526f2a6b1cf1e77ae275a18dc17986a6_3,
            type_description_2,
            outline_1_var_e
        );


        // Release cached frame if used for exception.
        if (frame_526f2a6b1cf1e77ae275a18dc17986a6_3 == cache_frame_526f2a6b1cf1e77ae275a18dc17986a6_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_526f2a6b1cf1e77ae275a18dc17986a6_3);
            cache_frame_526f2a6b1cf1e77ae275a18dc17986a6_3 = NULL;
        }

        assertFrameObject(frame_526f2a6b1cf1e77ae275a18dc17986a6_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooooooNooooooooooooooooooooo";
        goto try_except_handler_19;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_XDECREF(outline_1_var_e);
        outline_1_var_e = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_e);
        outline_1_var_e = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 285;
        goto frame_exception_exit_1;
        outline_result_2:;
        tmp_args_element_value_120 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_2);
        Py_DECREF(tmp_iterable_value_2);
        if (tmp_args_element_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_args_element_value_119);

            exception_lineno = 285;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = {tmp_args_element_value_119, tmp_args_element_value_120};
            tmp_args_element_value_118 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_103, call_args);
        }

        Py_DECREF(tmp_called_value_103);
        Py_DECREF(tmp_args_element_value_119);
        Py_DECREF(tmp_args_element_value_120);
        if (tmp_args_element_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 285;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 285;
        tmp_call_result_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_102, tmp_args_element_value_118);
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_args_element_value_118);
        if (tmp_call_result_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_called_instance_36;
        PyObject *tmp_call_result_82;
        if (var_log == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 288;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_36 = var_log;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 288;
        tmp_call_result_82 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_36,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[155], 0)
        );

        if (tmp_call_result_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_called_value_105;
        PyObject *tmp_expression_value_193;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_193 = var_needsConnected;
        tmp_called_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[70]);
        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 289;
        tmp_iter_arg_11 = CALL_FUNCTION_NO_ARGS(tmp_called_value_105);
        Py_DECREF(tmp_called_value_105);
        if (tmp_iter_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_73 = MAKE_ITERATOR(tmp_iter_arg_11);
        Py_DECREF(tmp_iter_arg_11);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_6__for_iterator == NULL);
        tmp_for_loop_6__for_iterator = tmp_assign_source_73;
    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_8 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_74 = ITERATOR_NEXT(tmp_next_source_8);
        if (tmp_assign_source_74 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                exception_lineno = 289;
                goto try_except_handler_21;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_75 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_75;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_106;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_call_result_83;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_called_value_107;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_args_element_value_123;
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_called_value_108;
        PyObject *tmp_call_result_84;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_args_element_value_125;
        int tmp_truth_name_2;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_expression_value_199;
        if (var_log == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_expression_value_194 = var_log;
        tmp_called_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[19]);
        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_expression_value_195 = mod_consts[156];
        tmp_called_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_195, mod_consts[52]);
        assert(!(tmp_called_value_107 == NULL));
        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_108 == NULL)) {
            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_107);

            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        CHECK_OBJECT(var_e);
        tmp_args_element_value_124 = var_e;
        tmp_args_element_value_125 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_125 == NULL)) {
            tmp_args_element_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_args_element_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_107);

            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = {tmp_args_element_value_124, tmp_args_element_value_125};
            tmp_call_result_84 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_108, call_args);
        }

        if (tmp_call_result_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_107);

            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_84);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_call_result_84);

            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_condition_result_28 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_84);
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(var_e);
        tmp_expression_value_196 = var_e;
        tmp_args_element_value_123 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[40]);
        if (tmp_args_element_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_107);

            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(var_e);
        tmp_expression_value_197 = var_e;
        tmp_args_element_value_123 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[158]);
        if (tmp_args_element_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_107);

            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        condexpr_end_2:;
        if (var_needsConnected == NULL) {
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_123);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_expression_value_198 = var_needsConnected;
        CHECK_OBJECT(var_e);
        tmp_subscript_value_34 = var_e;
        tmp_args_element_value_126 = LOOKUP_SUBSCRIPT(tmp_expression_value_198, tmp_subscript_value_34);
        if (tmp_args_element_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_123);

            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        if (var_mainElement == NULL) {
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_123);
            Py_DECREF(tmp_args_element_value_126);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_expression_value_199 = var_mainElement;
        tmp_args_element_value_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[40]);
        if (tmp_args_element_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_123);
            Py_DECREF(tmp_args_element_value_126);

            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = {tmp_args_element_value_123, tmp_args_element_value_126, tmp_args_element_value_127};
            tmp_args_element_value_122 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_107, call_args);
        }

        Py_DECREF(tmp_called_value_107);
        Py_DECREF(tmp_args_element_value_123);
        Py_DECREF(tmp_args_element_value_126);
        Py_DECREF(tmp_args_element_value_127);
        if (tmp_args_element_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 291;
        tmp_call_result_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_106, tmp_args_element_value_122);
        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_args_element_value_122);
        if (tmp_call_result_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_called_value_109;
        PyObject *tmp_call_result_85;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_args_element_value_129;
        int tmp_truth_name_3;
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        CHECK_OBJECT(var_e);
        tmp_args_element_value_128 = var_e;
        tmp_args_element_value_129 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_args_element_value_129 == NULL)) {
            tmp_args_element_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_args_element_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_value_128, tmp_args_element_value_129};
            tmp_call_result_85 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_109, call_args);
        }

        if (tmp_call_result_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_85);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_85);

            exception_lineno = 292;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_condition_result_29 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_85);
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_subscript_value_35;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_expression_value_200 = var_needsConnected;
        CHECK_OBJECT(var_e);
        tmp_subscript_value_35 = var_e;
        tmp_assign_source_76 = LOOKUP_SUBSCRIPT(tmp_expression_value_200, tmp_subscript_value_35);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = var_targetName;
            var_targetName = tmp_assign_source_76;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_subscript_value_36;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_expression_value_202 = var_mainElement;
        tmp_expression_value_201 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[97]);
        if (tmp_expression_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        CHECK_OBJECT(var_targetName);
        tmp_subscript_value_36 = var_targetName;
        tmp_assign_source_77 = LOOKUP_SUBSCRIPT(tmp_expression_value_201, tmp_subscript_value_36);
        Py_DECREF(tmp_expression_value_201);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = var_targetPins;
            var_targetPins = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_iter_arg_12;
        CHECK_OBJECT(var_targetPins);
        tmp_iter_arg_12 = var_targetPins;
        tmp_assign_source_78 = MAKE_ITERATOR(tmp_iter_arg_12);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_for_loop_7__for_iterator;
            tmp_for_loop_7__for_iterator = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_9:;
    {
        PyObject *tmp_next_source_9;
        PyObject *tmp_assign_source_79;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_next_source_9 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_79 = ITERATOR_NEXT(tmp_next_source_9);
        if (tmp_assign_source_79 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_9;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                exception_lineno = 295;
                goto try_except_handler_22;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_80;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_assign_source_80 = tmp_for_loop_7__iter_value;
        {
            PyObject *old = var_targetPin;
            var_targetPin = tmp_assign_source_80;
            Py_INCREF(var_targetPin);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_37;
        PyObject *tmp_call_result_86;
        PyObject *tmp_args_element_value_130;
        if (var_e == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[159]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 296;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_called_instance_37 = var_e;
        CHECK_OBJECT(var_targetPin);
        tmp_args_element_value_130 = var_targetPin;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 296;
        tmp_call_result_86 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_37, mod_consts[160], tmp_args_element_value_130);
        if (tmp_call_result_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_86);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 295;
        type_description_1 = "oooooooooNooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_21;
    // End of try:
    try_end_16:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    goto branch_end_27;
    branch_no_27:;
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_subscript_value_37;
        if (var_needsConnected == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 298;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_expression_value_203 = var_needsConnected;
        CHECK_OBJECT(var_e);
        tmp_subscript_value_37 = var_e;
        tmp_assign_source_81 = LOOKUP_SUBSCRIPT(tmp_expression_value_203, tmp_subscript_value_37);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = var_targetNames;
            var_targetNames = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_iter_arg_13;
        PyObject *tmp_called_value_110;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_called_value_111;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_expression_value_205;
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        CHECK_OBJECT(var_e);
        tmp_expression_value_205 = var_e;
        tmp_expression_value_204 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[25]);
        if (tmp_expression_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_called_value_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[161]);
        Py_DECREF(tmp_expression_value_204);
        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 300;
        tmp_args_element_value_131 = CALL_FUNCTION_NO_ARGS(tmp_called_value_111);
        Py_DECREF(tmp_called_value_111);
        if (tmp_args_element_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 300;
        tmp_iter_arg_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_110, tmp_args_element_value_131);
        Py_DECREF(tmp_args_element_value_131);
        if (tmp_iter_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_assign_source_82 = MAKE_ITERATOR(tmp_iter_arg_13);
        Py_DECREF(tmp_iter_arg_13);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_for_loop_8__for_iterator;
            tmp_for_loop_8__for_iterator = tmp_assign_source_82;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_10:;
    {
        PyObject *tmp_next_source_10;
        PyObject *tmp_assign_source_83;
        CHECK_OBJECT(tmp_for_loop_8__for_iterator);
        tmp_next_source_10 = tmp_for_loop_8__for_iterator;
        tmp_assign_source_83 = ITERATOR_NEXT(tmp_next_source_10);
        if (tmp_assign_source_83 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_10;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                exception_lineno = 300;
                goto try_except_handler_23;
            }
        }

        {
            PyObject *old = tmp_for_loop_8__iter_value;
            tmp_for_loop_8__iter_value = tmp_assign_source_83;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_iter_arg_14;
        CHECK_OBJECT(tmp_for_loop_8__iter_value);
        tmp_iter_arg_14 = tmp_for_loop_8__iter_value;
        tmp_assign_source_84 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_14);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_84;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_85 = UNPACK_NEXT(tmp_unpack_7, 0, 2);
        if (tmp_assign_source_85 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooNooooooooooooooooooooo";
            exception_lineno = 300;
            goto try_except_handler_25;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_85;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_86 = UNPACK_NEXT(tmp_unpack_8, 1, 2);
        if (tmp_assign_source_86 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooNooooooooooooooooooooo";
            exception_lineno = 300;
            goto try_except_handler_25;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_86;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooNooooooooooooooooooooo";
                    exception_lineno = 300;
                    goto try_except_handler_25;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[17];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooNooooooooooooooooooooo";
            exception_lineno = 300;
            goto try_except_handler_25;
        }
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_24;
    // End of try:
    try_end_17:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_23;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_87;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_87 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_87;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_88;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_88 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_inputPin;
            var_inputPin = tmp_assign_source_88;
            Py_INCREF(var_inputPin);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_subscript_value_38;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_subscript_value_39;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 302;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_expression_value_207 = var_mainElement;
        tmp_expression_value_206 = LOOKUP_ATTRIBUTE(tmp_expression_value_207, mod_consts[97]);
        if (tmp_expression_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_targetNames);
        tmp_expression_value_208 = var_targetNames;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_39 = var_i;
        tmp_subscript_value_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_208, tmp_subscript_value_39);
        if (tmp_subscript_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_206);

            exception_lineno = 302;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_89 = LOOKUP_SUBSCRIPT(tmp_expression_value_206, tmp_subscript_value_38);
        Py_DECREF(tmp_expression_value_206);
        Py_DECREF(tmp_subscript_value_38);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_targetPins;
            var_targetPins = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_iter_arg_15;
        CHECK_OBJECT(var_targetPins);
        tmp_iter_arg_15 = var_targetPins;
        tmp_assign_source_90 = MAKE_ITERATOR(tmp_iter_arg_15);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_for_loop_9__for_iterator;
            tmp_for_loop_9__for_iterator = tmp_assign_source_90;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_11:;
    {
        PyObject *tmp_next_source_11;
        PyObject *tmp_assign_source_91;
        CHECK_OBJECT(tmp_for_loop_9__for_iterator);
        tmp_next_source_11 = tmp_for_loop_9__for_iterator;
        tmp_assign_source_91 = ITERATOR_NEXT(tmp_next_source_11);
        if (tmp_assign_source_91 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_11;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooNooooooooooooooooooooo";
                exception_lineno = 303;
                goto try_except_handler_26;
            }
        }

        {
            PyObject *old = tmp_for_loop_9__iter_value;
            tmp_for_loop_9__iter_value = tmp_assign_source_91;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_92;
        CHECK_OBJECT(tmp_for_loop_9__iter_value);
        tmp_assign_source_92 = tmp_for_loop_9__iter_value;
        {
            PyObject *old = var_targetPin;
            var_targetPin = tmp_assign_source_92;
            Py_INCREF(var_targetPin);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_38;
        PyObject *tmp_call_result_87;
        PyObject *tmp_args_element_value_132;
        if (var_inputPin == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[162]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 305;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_called_instance_38 = var_inputPin;
        CHECK_OBJECT(var_targetPin);
        tmp_args_element_value_132 = var_targetPin;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 305;
        tmp_call_result_87 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_38, mod_consts[160], tmp_args_element_value_132);
        if (tmp_call_result_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_87);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 303;
        type_description_1 = "oooooooooNooooooooooooooooooooo";
        goto try_except_handler_26;
    }
    goto loop_start_11;
    loop_end_11:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_9__iter_value);
    tmp_for_loop_9__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_9__for_iterator);
    Py_DECREF(tmp_for_loop_9__for_iterator);
    tmp_for_loop_9__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_23;
    // End of try:
    try_end_19:;
    Py_XDECREF(tmp_for_loop_9__iter_value);
    tmp_for_loop_9__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_9__for_iterator);
    Py_DECREF(tmp_for_loop_9__for_iterator);
    tmp_for_loop_9__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 300;
        type_description_1 = "oooooooooNooooooooooooooooooooo";
        goto try_except_handler_23;
    }
    goto loop_start_10;
    loop_end_10:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_21;
    // End of try:
    try_end_20:;
    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    branch_end_27:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 289;
        type_description_1 = "oooooooooNooooooooooooooooooooo";
        goto try_except_handler_21;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_39;
        PyObject *tmp_call_result_88;
        if (var_log == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 307;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_39 = var_log;
        frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame.f_lineno = 307;
        tmp_call_result_88 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_39,
            mod_consts[3],
            PyTuple_GET_ITEM(mod_consts[163], 0)
        );

        if (tmp_call_result_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_tuple_element_1;
        if (var_mainElement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 308;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_mainElement;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_mainWidget == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 308;
            type_description_1 = "oooooooooNooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_mainWidget;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d4836ab31c727e36f2d87d7e8ff6d949);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d4836ab31c727e36f2d87d7e8ff6d949);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d4836ab31c727e36f2d87d7e8ff6d949);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d4836ab31c727e36f2d87d7e8ff6d949, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d4836ab31c727e36f2d87d7e8ff6d949->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d4836ab31c727e36f2d87d7e8ff6d949, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d4836ab31c727e36f2d87d7e8ff6d949,
        type_description_1,
        par_filePath,
        par_cwd,
        par_args,
        par_id,
        var_log,
        var_file,
        var_commands,
        var_needsConnected,
        var_registeredElements,
        NULL,
        var_mainElement,
        var_highPin,
        var_lowPin,
        var_mainWidget,
        var_comm,
        var_performIOChecks,
        var_i,
        var_o,
        var_newPin,
        var_newElement,
        var_newWidget,
        var_names,
        var_n,
        var_name,
        var_pins,
        var_e,
        var_targetName,
        var_targetPins,
        var_targetPin,
        var_targetNames,
        var_inputPin
    );


    // Release cached frame if used for exception.
    if (frame_d4836ab31c727e36f2d87d7e8ff6d949 == cache_frame_d4836ab31c727e36f2d87d7e8ff6d949) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d4836ab31c727e36f2d87d7e8ff6d949);
        cache_frame_d4836ab31c727e36f2d87d7e8ff6d949 = NULL;
    }

    assertFrameObject(frame_d4836ab31c727e36f2d87d7e8ff6d949);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_filePath);
    par_filePath = NULL;
    Py_XDECREF(par_cwd);
    par_cwd = NULL;
    Py_XDECREF(par_id);
    par_id = NULL;
    Py_XDECREF(var_log);
    var_log = NULL;
    Py_XDECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_commands);
    var_commands = NULL;
    Py_XDECREF(var_needsConnected);
    var_needsConnected = NULL;
    Py_XDECREF(var_registeredElements);
    var_registeredElements = NULL;
    Py_XDECREF(var_mainElement);
    var_mainElement = NULL;
    Py_XDECREF(var_highPin);
    var_highPin = NULL;
    Py_XDECREF(var_lowPin);
    var_lowPin = NULL;
    Py_XDECREF(var_mainWidget);
    var_mainWidget = NULL;
    Py_XDECREF(var_comm);
    var_comm = NULL;
    Py_XDECREF(var_performIOChecks);
    var_performIOChecks = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_o);
    var_o = NULL;
    Py_XDECREF(var_newPin);
    var_newPin = NULL;
    Py_XDECREF(var_newElement);
    var_newElement = NULL;
    Py_XDECREF(var_newWidget);
    var_newWidget = NULL;
    Py_XDECREF(var_names);
    var_names = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_pins);
    var_pins = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_targetName);
    var_targetName = NULL;
    Py_XDECREF(var_targetPins);
    var_targetPins = NULL;
    Py_XDECREF(var_targetPin);
    var_targetPin = NULL;
    Py_XDECREF(var_targetNames);
    var_targetNames = NULL;
    Py_XDECREF(var_inputPin);
    var_inputPin = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_filePath);
    par_filePath = NULL;
    Py_XDECREF(par_cwd);
    par_cwd = NULL;
    Py_XDECREF(par_id);
    par_id = NULL;
    Py_XDECREF(var_log);
    var_log = NULL;
    Py_XDECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_commands);
    var_commands = NULL;
    Py_XDECREF(var_needsConnected);
    var_needsConnected = NULL;
    Py_XDECREF(var_registeredElements);
    var_registeredElements = NULL;
    Py_XDECREF(var_mainElement);
    var_mainElement = NULL;
    Py_XDECREF(var_highPin);
    var_highPin = NULL;
    Py_XDECREF(var_lowPin);
    var_lowPin = NULL;
    Py_XDECREF(var_mainWidget);
    var_mainWidget = NULL;
    Py_XDECREF(var_comm);
    var_comm = NULL;
    Py_XDECREF(var_performIOChecks);
    var_performIOChecks = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_o);
    var_o = NULL;
    Py_XDECREF(var_newPin);
    var_newPin = NULL;
    Py_XDECREF(var_newElement);
    var_newElement = NULL;
    Py_XDECREF(var_newWidget);
    var_newWidget = NULL;
    Py_XDECREF(var_names);
    var_names = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_pins);
    var_pins = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_targetName);
    var_targetName = NULL;
    Py_XDECREF(var_targetPins);
    var_targetPins = NULL;
    Py_XDECREF(var_targetPin);
    var_targetPin = NULL;
    Py_XDECREF(var_targetNames);
    var_targetNames = NULL;
    Py_XDECREF(var_inputPin);
    var_inputPin = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_loading$loading$$$function__1_loadTable(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_loading$loading$$$function__1_loadTable,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_52109308f2ea5ec2e87629a5eb40a22c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_loading$loading,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_loading$loading$$$function__2_loadPyElement(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_loading$loading$$$function__2_loadPyElement,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_400c5854bcc6220dfbc6a35c6d77f8fc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_loading$loading,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_loading$loading$$$function__3_loadElement(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_loading$loading$$$function__3_loadElement,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d4836ab31c727e36f2d87d7e8ff6d949,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_loading$loading,
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

function_impl_code functable_loading$loading[] = {
    impl_loading$loading$$$function__1_loadTable,
    impl_loading$loading$$$function__2_loadPyElement,
    impl_loading$loading$$$function__3_loadElement,
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

    function_impl_code *current = functable_loading$loading;
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

    if (offset > sizeof(functable_loading$loading) || offset < 0) {
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
        functable_loading$loading[offset],
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
        module_loading$loading,
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
PyObject *modulecode_loading$loading(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("loading.loading");

    // Store the module for future use.
    module_loading$loading = module;

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
        PRINT_STRING("loading.loading: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("loading.loading: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("loading.loading: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initloading$loading\n");

    moduledict_loading$loading = MODULE_DICT(module_loading$loading);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_loading$loading,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_loading$loading,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[36]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_loading$loading,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_loading$loading,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_loading$loading,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_loading$loading);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_loading$loading, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_loading$loading, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_loading$loading, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_loading$loading);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_loading$loading, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_29092338fd96c63c181bdaa596cce77e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_29092338fd96c63c181bdaa596cce77e = MAKE_MODULE_FRAME(codeobj_29092338fd96c63c181bdaa596cce77e, module_loading$loading);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_29092338fd96c63c181bdaa596cce77e);
    assert(Py_REFCNT(frame_29092338fd96c63c181bdaa596cce77e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[167], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[168], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_loading$loading;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[34];
        frame_29092338fd96c63c181bdaa596cce77e->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[170];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_loading$loading;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[171];
        tmp_level_value_2 = mod_consts[34];
        frame_29092338fd96c63c181bdaa596cce77e->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_loading$loading,
                mod_consts[23],
                mod_consts[34]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[23]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_loading$loading,
                mod_consts[28],
                mod_consts[34]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[28]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_8);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[172];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_loading$loading;
        tmp_locals_arg_value_3 = (PyObject *)moduledict_loading$loading;
        tmp_fromlist_value_3 = mod_consts[173];
        tmp_level_value_3 = mod_consts[34];
        frame_29092338fd96c63c181bdaa596cce77e->m_frame.f_lineno = 4;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_loading$loading, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[174];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_loading$loading;
        tmp_locals_arg_value_4 = (PyObject *)moduledict_loading$loading;
        tmp_fromlist_value_4 = mod_consts[173];
        tmp_level_value_4 = mod_consts[34];
        frame_29092338fd96c63c181bdaa596cce77e->m_frame.f_lineno = 5;
        tmp_star_imported_2 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_star_imported_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_loading$loading, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[175];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_loading$loading;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[176];
        tmp_level_value_5 = mod_consts[34];
        frame_29092338fd96c63c181bdaa596cce77e->m_frame.f_lineno = 6;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_loading$loading,
                mod_consts[9],
                mod_consts[34]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[177];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_loading$loading;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[178];
        tmp_level_value_6 = mod_consts[34];
        frame_29092338fd96c63c181bdaa596cce77e->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_loading$loading,
                mod_consts[38],
                mod_consts[34]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[38]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_loading$loading,
                mod_consts[37],
                mod_consts[34]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[37]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_12);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_29092338fd96c63c181bdaa596cce77e);
#endif
    popFrameStack();

    assertFrameObject(frame_29092338fd96c63c181bdaa596cce77e);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_29092338fd96c63c181bdaa596cce77e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_29092338fd96c63c181bdaa596cce77e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29092338fd96c63c181bdaa596cce77e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29092338fd96c63c181bdaa596cce77e, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[104];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_13 = MAKE_FUNCTION_loading$loading$$$function__1_loadTable(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = PyList_New(0);
        tmp_defaults_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[34];
        PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_1);


        tmp_assign_source_14 = MAKE_FUNCTION_loading$loading$$$function__2_loadPyElement(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = Py_None;
        tmp_defaults_3 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = PyList_New(0);
        PyTuple_SET_ITEM(tmp_defaults_3, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[34];
        PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_2);


        tmp_assign_source_15 = MAKE_FUNCTION_loading$loading$$$function__3_loadElement(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_loading$loading, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_15);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("loading.loading", false);

    return module_loading$loading;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_loading$loading, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("loading$loading", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
